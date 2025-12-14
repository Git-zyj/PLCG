#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)64;
long long int var_4 = 8244032039661013879LL;
unsigned long long int var_7 = 16086377958918579836ULL;
unsigned char var_8 = (unsigned char)70;
int zero = 0;
unsigned long long int var_11 = 3151827259117791346ULL;
_Bool var_12 = (_Bool)0;
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
