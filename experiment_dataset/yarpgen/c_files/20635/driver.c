#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)31047;
unsigned long long int var_4 = 15914928016215326387ULL;
long long int var_6 = -8657573780885838682LL;
unsigned short var_8 = (unsigned short)58638;
int var_9 = 1623806364;
int zero = 0;
unsigned char var_15 = (unsigned char)108;
int var_16 = 1149109913;
long long int var_17 = -6268550309755250769LL;
unsigned int var_18 = 3852496588U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
