#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -726793281;
unsigned long long int var_6 = 3614908267634951980ULL;
unsigned int var_12 = 672894435U;
int zero = 0;
unsigned long long int var_14 = 6127049164796979275ULL;
unsigned long long int var_15 = 9088702924500867951ULL;
short var_16 = (short)26395;
void init() {
}

void checksum() {
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
