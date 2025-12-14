#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-40;
signed char var_1 = (signed char)58;
long long int var_3 = 2847775644596328878LL;
short var_4 = (short)-13175;
signed char var_7 = (signed char)-23;
long long int var_9 = 3028326647641192049LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 8208071603851263670LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
