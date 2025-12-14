#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)77;
_Bool var_9 = (_Bool)0;
unsigned long long int var_12 = 17943651316406982575ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)23248;
unsigned long long int var_21 = 6114399454725114248ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
