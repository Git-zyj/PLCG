#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1961121522765065947LL;
long long int var_2 = 1431966225479552318LL;
unsigned long long int var_4 = 18224959004799597408ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 4885781691507827123ULL;
_Bool var_7 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = -7847999074788684586LL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
