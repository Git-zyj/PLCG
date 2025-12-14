#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4905134289559450324LL;
long long int var_2 = -6216030806807230512LL;
long long int var_3 = 4254088861344644896LL;
short var_7 = (short)-10383;
short var_8 = (short)11151;
int zero = 0;
short var_13 = (short)-3650;
int var_14 = 1656789729;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
