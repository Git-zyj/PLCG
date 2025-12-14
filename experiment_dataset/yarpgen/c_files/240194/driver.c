#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)65;
unsigned int var_3 = 1208612108U;
int var_5 = -203871643;
int var_11 = -2009419382;
long long int var_15 = 2264500044655515583LL;
int zero = 0;
unsigned int var_17 = 3362091511U;
int var_18 = -1591715523;
unsigned short var_19 = (unsigned short)13918;
signed char var_20 = (signed char)107;
unsigned int var_21 = 963247435U;
long long int var_22 = 1209023644894394555LL;
int var_23 = -1471161597;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
