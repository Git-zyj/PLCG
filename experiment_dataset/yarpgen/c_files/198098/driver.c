#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)155;
signed char var_1 = (signed char)80;
signed char var_5 = (signed char)-103;
unsigned char var_6 = (unsigned char)176;
unsigned char var_7 = (unsigned char)59;
unsigned char var_9 = (unsigned char)220;
long long int var_11 = 3888734869118645517LL;
long long int var_12 = 5955165728102613576LL;
long long int var_14 = 4242742643935497396LL;
unsigned char var_19 = (unsigned char)47;
int zero = 0;
int var_20 = 724696644;
unsigned long long int var_21 = 4100907413945734799ULL;
unsigned int var_22 = 263805339U;
unsigned char var_23 = (unsigned char)30;
void init() {
}

void checksum() {
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
