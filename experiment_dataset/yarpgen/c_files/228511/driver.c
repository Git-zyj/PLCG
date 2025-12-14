#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8414;
unsigned short var_4 = (unsigned short)15432;
long long int var_6 = -6003635832826870778LL;
unsigned long long int var_7 = 6202307125766056889ULL;
int var_8 = 451480367;
int zero = 0;
unsigned long long int var_13 = 12806489661388268021ULL;
long long int var_14 = -1924973786823759349LL;
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
