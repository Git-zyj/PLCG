#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)254;
unsigned char var_9 = (unsigned char)32;
unsigned char var_10 = (unsigned char)167;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 17622812687566518189ULL;
long long int var_20 = -5963128407974506212LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
