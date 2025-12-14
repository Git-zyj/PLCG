#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1054171677U;
int var_3 = 143159109;
unsigned short var_4 = (unsigned short)54105;
unsigned long long int var_7 = 12725714147919126565ULL;
unsigned int var_9 = 3169852743U;
int var_10 = 194107378;
int var_11 = 961743318;
signed char var_12 = (signed char)76;
short var_13 = (short)-29854;
int zero = 0;
unsigned short var_14 = (unsigned short)50730;
long long int var_15 = -2414950432347031129LL;
unsigned int var_16 = 2490005679U;
unsigned int var_17 = 355098878U;
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
