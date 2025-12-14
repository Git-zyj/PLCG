#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 5363190622223101456LL;
long long int var_6 = 7960227336038204710LL;
unsigned char var_7 = (unsigned char)162;
unsigned int var_8 = 1213188595U;
unsigned short var_9 = (unsigned short)51267;
unsigned int var_13 = 4125245113U;
signed char var_15 = (signed char)-54;
int zero = 0;
unsigned int var_19 = 546315118U;
unsigned char var_20 = (unsigned char)181;
unsigned int var_21 = 4000988771U;
signed char var_22 = (signed char)46;
signed char var_23 = (signed char)32;
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
