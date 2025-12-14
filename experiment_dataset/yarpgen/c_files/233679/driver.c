#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11736679048855212418ULL;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)111;
unsigned char var_3 = (unsigned char)39;
short var_4 = (short)4577;
int var_9 = 259855729;
signed char var_11 = (signed char)-85;
unsigned char var_14 = (unsigned char)110;
unsigned long long int var_19 = 11787751646244406566ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3599616182U;
short var_22 = (short)-32538;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
