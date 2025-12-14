#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16647016812925166922ULL;
signed char var_3 = (signed char)-72;
int var_5 = 660592788;
short var_8 = (short)19159;
int zero = 0;
unsigned int var_11 = 4031554378U;
short var_12 = (short)12713;
int var_13 = -638224505;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
