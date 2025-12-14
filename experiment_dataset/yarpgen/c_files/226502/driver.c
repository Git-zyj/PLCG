#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11230081587161650711ULL;
short var_1 = (short)-20587;
long long int var_2 = -1866507694785024279LL;
short var_3 = (short)8006;
long long int var_4 = -837350299948380237LL;
unsigned char var_5 = (unsigned char)250;
unsigned long long int var_6 = 15565767944040318716ULL;
long long int var_7 = 5978704205117751465LL;
unsigned long long int var_8 = 3558916493791725243ULL;
unsigned char var_9 = (unsigned char)225;
int zero = 0;
short var_11 = (short)30232;
unsigned long long int var_12 = 9865121124845623301ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
