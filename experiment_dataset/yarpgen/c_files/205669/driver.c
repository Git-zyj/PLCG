#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)43320;
unsigned short var_4 = (unsigned short)40588;
short var_5 = (short)-27108;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 4027650695U;
int var_10 = -2082475350;
signed char var_11 = (signed char)-4;
unsigned char var_12 = (unsigned char)60;
unsigned char var_13 = (unsigned char)219;
int zero = 0;
int var_14 = 2003821423;
unsigned long long int var_15 = 13966502883952879823ULL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
