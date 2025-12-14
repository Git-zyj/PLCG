#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9833517282666882548ULL;
short var_2 = (short)22372;
unsigned short var_3 = (unsigned short)55708;
long long int var_4 = -6340393350862906998LL;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int var_8 = -2141302075;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)244;
unsigned int var_16 = 1194755861U;
int var_17 = -1428653142;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
