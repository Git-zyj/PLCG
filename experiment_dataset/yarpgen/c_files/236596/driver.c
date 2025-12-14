#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3566066818U;
short var_3 = (short)-14361;
unsigned char var_6 = (unsigned char)193;
long long int var_10 = -4953335122152268432LL;
int zero = 0;
long long int var_15 = 4948623374394216726LL;
int var_16 = -1998105352;
unsigned long long int var_17 = 10695475467567111889ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
