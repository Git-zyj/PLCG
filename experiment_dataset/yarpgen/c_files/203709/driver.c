#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)46;
long long int var_3 = -4455680707262145005LL;
long long int var_4 = -654765044743009828LL;
long long int var_7 = -7074323093264399279LL;
unsigned long long int var_9 = 5938129097052886934ULL;
int zero = 0;
short var_12 = (short)-13047;
unsigned long long int var_13 = 11952627007397896686ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
