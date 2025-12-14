#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49917;
signed char var_3 = (signed char)17;
signed char var_6 = (signed char)43;
unsigned long long int var_8 = 5004521986847537133ULL;
unsigned char var_11 = (unsigned char)252;
unsigned long long int var_15 = 10711767070089666148ULL;
signed char var_16 = (signed char)-125;
int zero = 0;
int var_20 = -1681478551;
unsigned char var_21 = (unsigned char)40;
int var_22 = -2108738210;
unsigned short var_23 = (unsigned short)41972;
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
