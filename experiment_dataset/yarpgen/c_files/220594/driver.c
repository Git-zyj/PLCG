#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1023469362;
long long int var_4 = 3098375930431644709LL;
int var_5 = -1876264519;
int var_13 = 227903042;
unsigned char var_18 = (unsigned char)91;
int zero = 0;
unsigned int var_19 = 311841242U;
unsigned char var_20 = (unsigned char)164;
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
