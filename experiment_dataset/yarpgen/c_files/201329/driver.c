#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1875159568;
long long int var_2 = -9039949286884213113LL;
signed char var_5 = (signed char)79;
int var_6 = -1756525400;
int var_9 = -1493009880;
int var_11 = -193132529;
short var_12 = (short)32205;
unsigned long long int var_14 = 18407007702965113351ULL;
int zero = 0;
long long int var_15 = -7698938566080600104LL;
unsigned short var_16 = (unsigned short)33605;
signed char var_17 = (signed char)46;
int var_18 = -1273282842;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
