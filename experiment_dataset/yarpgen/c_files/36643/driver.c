#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)217;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)43;
unsigned long long int var_5 = 2540890496311674348ULL;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)112;
int zero = 0;
signed char var_13 = (signed char)59;
unsigned long long int var_14 = 13996794421880421805ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
