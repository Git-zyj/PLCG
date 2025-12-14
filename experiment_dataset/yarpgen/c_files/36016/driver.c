#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -93979137;
signed char var_3 = (signed char)60;
long long int var_7 = 3932680426279839427LL;
unsigned char var_8 = (unsigned char)226;
long long int var_9 = -2624587281852011117LL;
long long int var_12 = -7140291045580869161LL;
int zero = 0;
unsigned char var_16 = (unsigned char)100;
unsigned int var_17 = 2571566330U;
unsigned long long int var_18 = 6262694357472429554ULL;
short var_19 = (short)4376;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
