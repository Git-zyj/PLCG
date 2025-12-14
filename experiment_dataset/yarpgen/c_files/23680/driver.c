#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3965117326U;
unsigned long long int var_4 = 13608101047260981499ULL;
short var_6 = (short)-2832;
unsigned long long int var_7 = 16732454536040244757ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 4456447584114320713ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 14998323164259050233ULL;
unsigned long long int var_15 = 4332235760548796415ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
