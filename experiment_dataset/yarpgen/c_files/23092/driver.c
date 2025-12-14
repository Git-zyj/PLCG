#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10739578683049758566ULL;
unsigned long long int var_3 = 8983707216865693618ULL;
unsigned long long int var_6 = 5775891811300747109ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 17612424821929452598ULL;
unsigned long long int var_12 = 3416149290477921279ULL;
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
