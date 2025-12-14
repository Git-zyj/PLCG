#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)53829;
unsigned char var_6 = (unsigned char)23;
long long int var_7 = 8223490573643642696LL;
long long int var_9 = 8704371890342743364LL;
signed char var_12 = (signed char)-106;
unsigned short var_15 = (unsigned short)10898;
unsigned char var_19 = (unsigned char)99;
int zero = 0;
unsigned short var_20 = (unsigned short)50344;
int var_21 = 838103011;
void init() {
}

void checksum() {
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
