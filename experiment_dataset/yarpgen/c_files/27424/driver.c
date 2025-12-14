#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13303734004256874103ULL;
unsigned long long int var_3 = 5741723351658318218ULL;
unsigned int var_6 = 540285591U;
long long int var_7 = 9050124852846538057LL;
int zero = 0;
unsigned int var_10 = 3946672832U;
long long int var_11 = 7757125057208692510LL;
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
