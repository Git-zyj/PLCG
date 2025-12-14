#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11627959303376805574ULL;
long long int var_1 = -3690208512316684891LL;
short var_13 = (short)3803;
long long int var_18 = 5311401390879046465LL;
int zero = 0;
signed char var_20 = (signed char)-87;
signed char var_21 = (signed char)-45;
unsigned char var_22 = (unsigned char)123;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
