#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3970669729087587814LL;
short var_3 = (short)19731;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)31;
unsigned int var_8 = 2578586149U;
int zero = 0;
unsigned char var_12 = (unsigned char)122;
short var_13 = (short)7708;
unsigned int var_14 = 1608986125U;
unsigned int var_15 = 3703940847U;
unsigned char var_16 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
