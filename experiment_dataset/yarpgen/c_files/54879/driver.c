#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2568523482177760092LL;
_Bool var_4 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned char var_12 = (unsigned char)152;
long long int var_13 = 3882056921494536529LL;
int zero = 0;
long long int var_17 = -3618992670928892206LL;
int var_18 = -387305418;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
