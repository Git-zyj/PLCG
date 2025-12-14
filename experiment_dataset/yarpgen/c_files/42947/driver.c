#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)225;
short var_4 = (short)4157;
unsigned long long int var_10 = 7907162494247503490ULL;
short var_12 = (short)16690;
short var_13 = (short)26089;
unsigned long long int var_14 = 431236710700076806ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)226;
unsigned long long int var_17 = 15517785950133154414ULL;
unsigned long long int var_18 = 15292821926547908897ULL;
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
