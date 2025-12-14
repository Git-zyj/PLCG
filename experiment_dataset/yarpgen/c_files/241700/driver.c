#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)7244;
unsigned short var_8 = (unsigned short)13982;
unsigned long long int var_11 = 18334856902912431033ULL;
int zero = 0;
unsigned long long int var_13 = 10930012705867476125ULL;
int var_14 = 1257852591;
unsigned long long int var_15 = 1989623265110579613ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
