#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 569280820U;
unsigned int var_8 = 2977392352U;
int zero = 0;
unsigned int var_17 = 907367191U;
unsigned int var_18 = 196203211U;
unsigned char var_19 = (unsigned char)10;
unsigned int var_20 = 1180141593U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
