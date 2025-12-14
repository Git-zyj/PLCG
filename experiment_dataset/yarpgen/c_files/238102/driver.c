#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1585882582;
signed char var_5 = (signed char)-66;
signed char var_6 = (signed char)-99;
int zero = 0;
signed char var_12 = (signed char)93;
unsigned long long int var_13 = 5851403942590873484ULL;
signed char var_14 = (signed char)-80;
unsigned long long int var_15 = 15622665972720952737ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
