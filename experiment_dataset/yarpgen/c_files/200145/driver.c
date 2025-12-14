#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-22917;
signed char var_9 = (signed char)-37;
short var_10 = (short)-1458;
signed char var_13 = (signed char)66;
short var_15 = (short)18982;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-35;
int var_21 = -664931874;
unsigned int var_22 = 3891681027U;
int var_23 = 902264364;
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
