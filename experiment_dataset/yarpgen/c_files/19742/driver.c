#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)114;
int var_4 = -1147014015;
signed char var_9 = (signed char)-107;
long long int var_12 = 7941474443056418659LL;
long long int var_14 = -8041276061444141347LL;
int zero = 0;
long long int var_15 = 8202525276336834951LL;
unsigned int var_16 = 3434516247U;
short var_17 = (short)13816;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
