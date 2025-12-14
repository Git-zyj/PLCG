#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)60490;
int var_11 = -477957240;
unsigned long long int var_18 = 6736128987503500038ULL;
int zero = 0;
unsigned long long int var_20 = 10794055054414522475ULL;
unsigned int var_21 = 2784142220U;
unsigned int var_22 = 1223117011U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
