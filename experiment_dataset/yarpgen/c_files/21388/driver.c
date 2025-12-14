#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
int var_9 = 291243738;
unsigned long long int var_10 = 3124657410135326312ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)61596;
short var_20 = (short)-26650;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 8906408805782782211ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
