#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6797414939442299413LL;
long long int var_4 = -1954898296124175978LL;
int var_7 = 2004989570;
short var_8 = (short)-31745;
int zero = 0;
int var_10 = 1408878735;
signed char var_11 = (signed char)119;
signed char var_12 = (signed char)-59;
short var_13 = (short)32205;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
