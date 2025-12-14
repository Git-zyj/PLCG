#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16375342617345148147ULL;
unsigned short var_3 = (unsigned short)33783;
unsigned short var_4 = (unsigned short)13899;
unsigned short var_7 = (unsigned short)53170;
long long int var_8 = 5600836564963086647LL;
long long int var_9 = 233091817489867978LL;
int zero = 0;
long long int var_10 = -5991400794408375313LL;
long long int var_11 = 6866510332677367508LL;
long long int var_12 = -5486785849853516570LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
