#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 471065653083186495ULL;
unsigned long long int var_7 = 5622152414242828663ULL;
unsigned long long int var_8 = 18429187013118941774ULL;
int zero = 0;
long long int var_13 = 1784088902818071664LL;
unsigned short var_14 = (unsigned short)60549;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
