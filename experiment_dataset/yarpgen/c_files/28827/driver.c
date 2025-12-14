#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-41;
int var_2 = 1532434314;
unsigned char var_7 = (unsigned char)214;
unsigned short var_11 = (unsigned short)47797;
long long int var_12 = -6363952391911953071LL;
int zero = 0;
unsigned char var_16 = (unsigned char)58;
long long int var_17 = -1321320422004420613LL;
signed char var_18 = (signed char)104;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
