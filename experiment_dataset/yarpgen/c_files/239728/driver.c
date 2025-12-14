#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 970814035;
unsigned long long int var_5 = 9898220753510396861ULL;
unsigned short var_9 = (unsigned short)16902;
int zero = 0;
unsigned int var_12 = 1326597623U;
unsigned long long int var_13 = 490784932768168266ULL;
int var_14 = -1740350618;
unsigned long long int var_15 = 5094293228423998213ULL;
long long int var_16 = 4144425655071602080LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
