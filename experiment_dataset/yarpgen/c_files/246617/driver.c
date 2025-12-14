#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8277;
unsigned short var_1 = (unsigned short)2618;
int var_2 = 1093989823;
unsigned int var_3 = 3525222458U;
unsigned long long int var_5 = 17039006472363400674ULL;
int var_7 = -1592931728;
unsigned int var_8 = 2458232898U;
int zero = 0;
unsigned int var_10 = 1185983866U;
unsigned long long int var_11 = 5750832663505862496ULL;
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
