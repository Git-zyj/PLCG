#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)140;
unsigned long long int var_1 = 16786190215270126313ULL;
unsigned long long int var_6 = 17384790284149619738ULL;
unsigned short var_11 = (unsigned short)10990;
int zero = 0;
unsigned char var_18 = (unsigned char)1;
signed char var_19 = (signed char)73;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-10;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
