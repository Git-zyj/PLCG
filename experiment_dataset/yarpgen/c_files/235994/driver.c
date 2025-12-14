#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3946058722U;
long long int var_4 = -7151313445618695526LL;
_Bool var_7 = (_Bool)1;
long long int var_11 = 1198144715198121762LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -1851450282;
void init() {
}

void checksum() {
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
