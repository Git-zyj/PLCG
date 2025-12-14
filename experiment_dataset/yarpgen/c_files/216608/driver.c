#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -121260897;
long long int var_2 = 3636406459563850901LL;
_Bool var_3 = (_Bool)1;
long long int var_7 = 6602126178707050996LL;
short var_10 = (short)-5173;
int zero = 0;
long long int var_11 = -605138983270296495LL;
long long int var_12 = 32554010700723961LL;
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
