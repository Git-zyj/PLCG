#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)243;
int var_1 = -1842142351;
int var_3 = 412487431;
unsigned long long int var_5 = 10037232362306115297ULL;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
long long int var_13 = -5092105452725102856LL;
unsigned char var_14 = (unsigned char)233;
unsigned char var_15 = (unsigned char)150;
unsigned long long int var_16 = 2871359400207542202ULL;
int var_17 = 665678612;
int zero = 0;
unsigned int var_19 = 1707150920U;
unsigned long long int var_20 = 214078950822478772ULL;
unsigned long long int var_21 = 8881372466804036118ULL;
unsigned int var_22 = 3537529961U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
