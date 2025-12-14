#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6587311512917867452LL;
long long int var_9 = 1185421353649167090LL;
unsigned long long int var_11 = 3171105897315585094ULL;
unsigned int var_14 = 495281479U;
int zero = 0;
unsigned int var_16 = 1490521218U;
unsigned long long int var_17 = 10967571216584781026ULL;
long long int var_18 = -8442558608096446401LL;
unsigned long long int var_19 = 8493286136767956266ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
