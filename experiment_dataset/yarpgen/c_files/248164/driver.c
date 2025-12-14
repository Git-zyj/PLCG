#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 10139027730154000779ULL;
unsigned short var_10 = (unsigned short)19155;
unsigned char var_14 = (unsigned char)88;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 1895071377016714988ULL;
unsigned char var_20 = (unsigned char)184;
int var_21 = 781466914;
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
