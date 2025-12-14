#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)27;
unsigned int var_2 = 4013138542U;
short var_3 = (short)9615;
unsigned short var_5 = (unsigned short)6601;
unsigned int var_6 = 2397816267U;
unsigned short var_9 = (unsigned short)32479;
long long int var_13 = 6557436163138522207LL;
long long int var_18 = -6410326675465853110LL;
unsigned char var_19 = (unsigned char)137;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 1864422819;
signed char var_22 = (signed char)-102;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
