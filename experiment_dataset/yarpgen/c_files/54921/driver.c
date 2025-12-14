#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)90;
_Bool var_4 = (_Bool)0;
unsigned int var_7 = 2745760966U;
signed char var_8 = (signed char)-35;
unsigned int var_9 = 2712982130U;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3664042240U;
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
