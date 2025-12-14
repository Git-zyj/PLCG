#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)16614;
unsigned short var_5 = (unsigned short)27733;
unsigned long long int var_10 = 9737472734292550335ULL;
unsigned int var_13 = 411064291U;
int zero = 0;
unsigned int var_18 = 3718753649U;
unsigned long long int var_19 = 4792491976882477369ULL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
