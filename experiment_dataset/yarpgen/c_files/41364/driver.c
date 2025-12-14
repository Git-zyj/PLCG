#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 913941696;
_Bool var_3 = (_Bool)0;
long long int var_5 = 5960287782640531622LL;
unsigned short var_8 = (unsigned short)55932;
int var_15 = -388697538;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_20 = -1704505116;
unsigned short var_21 = (unsigned short)58033;
unsigned long long int var_22 = 17816862358112909965ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
