#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -875492509331637845LL;
short var_3 = (short)-26003;
int var_5 = 216471295;
long long int var_7 = 7517935270207169160LL;
short var_8 = (short)-12944;
int zero = 0;
signed char var_11 = (signed char)35;
unsigned int var_12 = 2059208449U;
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
