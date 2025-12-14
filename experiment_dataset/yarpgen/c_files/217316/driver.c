#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39984;
unsigned int var_1 = 2369227951U;
unsigned int var_2 = 3166421165U;
short var_6 = (short)19189;
unsigned int var_8 = 1416309377U;
unsigned short var_10 = (unsigned short)28102;
int zero = 0;
unsigned long long int var_12 = 2305158862442512892ULL;
unsigned int var_13 = 4245750959U;
unsigned int var_14 = 728263188U;
void init() {
}

void checksum() {
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
