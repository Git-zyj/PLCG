#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1242651567;
unsigned long long int var_1 = 9753976864306960762ULL;
unsigned char var_3 = (unsigned char)23;
unsigned short var_10 = (unsigned short)30122;
unsigned short var_13 = (unsigned short)52310;
unsigned short var_14 = (unsigned short)12340;
int zero = 0;
unsigned int var_15 = 2224467469U;
long long int var_16 = 5000204912694124745LL;
unsigned short var_17 = (unsigned short)44806;
signed char var_18 = (signed char)-29;
unsigned short var_19 = (unsigned short)10093;
int var_20 = 1065277344;
unsigned int var_21 = 523558971U;
unsigned long long int var_22 = 9959780163082307359ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
