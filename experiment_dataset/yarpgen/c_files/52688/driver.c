#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)214;
long long int var_4 = -4209190904988592194LL;
unsigned long long int var_6 = 6465514696595482121ULL;
unsigned short var_11 = (unsigned short)22197;
signed char var_16 = (signed char)120;
int zero = 0;
unsigned long long int var_17 = 3918560524724796658ULL;
unsigned long long int var_18 = 126122298017895180ULL;
unsigned int var_19 = 2496538579U;
signed char var_20 = (signed char)-44;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
