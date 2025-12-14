#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 910671118;
unsigned long long int var_4 = 17673885376086092147ULL;
long long int var_5 = 3348062694589852187LL;
short var_7 = (short)26726;
short var_9 = (short)-15485;
int var_13 = -1843019822;
int zero = 0;
long long int var_14 = -8646517455617197422LL;
int var_15 = 575711589;
int var_16 = 1627700296;
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
