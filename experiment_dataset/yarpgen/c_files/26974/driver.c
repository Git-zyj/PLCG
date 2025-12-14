#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1897149770;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 1697423304U;
int var_8 = -624483331;
unsigned int var_9 = 3495470807U;
unsigned long long int var_13 = 1609382544756023557ULL;
unsigned short var_14 = (unsigned short)22339;
int var_15 = -125618181;
int zero = 0;
unsigned long long int var_16 = 13143889744752690843ULL;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)61585;
void init() {
}

void checksum() {
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
