#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9766530412704109321ULL;
short var_2 = (short)18868;
unsigned long long int var_6 = 6763415408380341217ULL;
unsigned long long int var_8 = 6804771865194359141ULL;
short var_9 = (short)26256;
unsigned long long int var_11 = 1173018503101193350ULL;
short var_18 = (short)19675;
int zero = 0;
short var_19 = (short)-25517;
short var_20 = (short)-8732;
unsigned long long int var_21 = 8411737981656198753ULL;
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
