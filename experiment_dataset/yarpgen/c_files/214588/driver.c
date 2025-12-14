#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7756417008385979110LL;
unsigned short var_3 = (unsigned short)40368;
long long int var_4 = 1300262835493339180LL;
long long int var_6 = 8682892664027410215LL;
unsigned short var_8 = (unsigned short)15173;
unsigned short var_9 = (unsigned short)1982;
long long int var_10 = -3004684730724294789LL;
int zero = 0;
unsigned short var_11 = (unsigned short)34304;
unsigned short var_12 = (unsigned short)62500;
long long int var_13 = -3600603719741113209LL;
long long int var_14 = -1084284150666876671LL;
long long int var_15 = 9039716740146662831LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
