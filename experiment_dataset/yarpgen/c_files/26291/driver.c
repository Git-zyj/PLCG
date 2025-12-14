#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)193;
unsigned short var_4 = (unsigned short)22721;
_Bool var_5 = (_Bool)1;
unsigned short var_9 = (unsigned short)61972;
unsigned long long int var_12 = 16887287940142440588ULL;
unsigned short var_13 = (unsigned short)8366;
unsigned short var_15 = (unsigned short)47259;
unsigned int var_18 = 2685838705U;
int zero = 0;
unsigned short var_19 = (unsigned short)33494;
unsigned char var_20 = (unsigned char)6;
unsigned long long int var_21 = 16703257101554161883ULL;
int var_22 = -766081516;
short var_23 = (short)-19429;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
