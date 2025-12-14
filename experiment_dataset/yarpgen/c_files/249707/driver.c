#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14936316049724187161ULL;
unsigned long long int var_2 = 13301668895726599030ULL;
long long int var_4 = 34244834013295564LL;
unsigned short var_6 = (unsigned short)46239;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)123;
unsigned long long int var_11 = 15537659816724355066ULL;
unsigned char var_12 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
