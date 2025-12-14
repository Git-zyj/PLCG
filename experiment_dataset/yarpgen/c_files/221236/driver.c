#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1216028818647368898ULL;
unsigned long long int var_5 = 6996013165551450811ULL;
unsigned long long int var_9 = 1114150399333400531ULL;
unsigned long long int var_10 = 2208289296954456942ULL;
int zero = 0;
unsigned long long int var_14 = 1723497966870133137ULL;
unsigned long long int var_15 = 7252469525447318630ULL;
unsigned long long int var_16 = 783895032155736653ULL;
unsigned long long int var_17 = 16032468227054124701ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
