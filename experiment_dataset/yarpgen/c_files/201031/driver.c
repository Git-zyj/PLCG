#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7252022521351933681LL;
unsigned int var_2 = 4281156951U;
unsigned int var_7 = 958341363U;
unsigned short var_8 = (unsigned short)36388;
unsigned int var_9 = 3594757975U;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 1098172146U;
unsigned char var_14 = (unsigned char)148;
signed char var_15 = (signed char)-111;
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
