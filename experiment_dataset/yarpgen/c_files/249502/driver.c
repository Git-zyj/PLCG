#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)46454;
unsigned short var_9 = (unsigned short)6040;
int zero = 0;
unsigned long long int var_19 = 2281361753740322695ULL;
long long int var_20 = -3301990130131344376LL;
short var_21 = (short)-6190;
void init() {
}

void checksum() {
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
