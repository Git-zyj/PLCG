#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9355841561453178817ULL;
unsigned char var_2 = (unsigned char)164;
long long int var_5 = -5500890020073110495LL;
long long int var_8 = 661312514635586075LL;
int var_10 = 232730117;
int zero = 0;
int var_11 = -894113937;
long long int var_12 = -2392390623233790288LL;
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
