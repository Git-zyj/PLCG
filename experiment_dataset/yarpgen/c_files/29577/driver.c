#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1223037546200417225LL;
signed char var_4 = (signed char)110;
long long int var_5 = -8215961676744002942LL;
signed char var_9 = (signed char)25;
signed char var_10 = (signed char)-54;
unsigned int var_12 = 2482170213U;
signed char var_13 = (signed char)95;
long long int var_15 = -5863441336482764675LL;
int zero = 0;
long long int var_16 = -2393478666594471567LL;
long long int var_17 = 1091622585582961832LL;
void init() {
}

void checksum() {
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
