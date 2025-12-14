#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 8850720607381177656LL;
long long int var_4 = -4742890374463895510LL;
int var_13 = -1368571552;
int var_14 = -1072866425;
int zero = 0;
int var_18 = 1018353281;
int var_19 = 811360679;
unsigned long long int var_20 = 1748179183806882691ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
