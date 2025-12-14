#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3631129980341292109ULL;
unsigned long long int var_7 = 14142457537900862651ULL;
int zero = 0;
unsigned long long int var_19 = 5141401541682087923ULL;
unsigned long long int var_20 = 14248235953835107489ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
