#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3390725747894981706LL;
unsigned short var_3 = (unsigned short)27093;
short var_7 = (short)18242;
unsigned int var_8 = 177399025U;
unsigned char var_9 = (unsigned char)116;
short var_11 = (short)12834;
int zero = 0;
int var_13 = -1756822067;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3120853584U;
void init() {
}

void checksum() {
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
