#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)199;
unsigned int var_2 = 2207040609U;
int var_3 = -1249057976;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)118;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)22;
unsigned long long int var_11 = 737569439020674880ULL;
long long int var_13 = 8352898965443237630LL;
long long int var_15 = 4568688159876815500LL;
int var_17 = -1728047182;
int zero = 0;
unsigned char var_18 = (unsigned char)5;
unsigned short var_19 = (unsigned short)9146;
signed char var_20 = (signed char)-53;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
