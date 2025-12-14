#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17691235437855483194ULL;
unsigned short var_4 = (unsigned short)49806;
long long int var_6 = 5296563467482319495LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)0;
unsigned long long int var_20 = 12006089175501066001ULL;
unsigned char var_21 = (unsigned char)109;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
