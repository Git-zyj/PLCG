#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)54;
unsigned int var_2 = 2673944751U;
unsigned char var_3 = (unsigned char)7;
unsigned int var_6 = 4279216849U;
unsigned int var_7 = 1284281058U;
unsigned int var_9 = 2661960377U;
unsigned short var_10 = (unsigned short)50145;
long long int var_11 = -3823887378649521776LL;
int zero = 0;
unsigned short var_16 = (unsigned short)8451;
signed char var_17 = (signed char)122;
signed char var_18 = (signed char)42;
signed char var_19 = (signed char)67;
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
