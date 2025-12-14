#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17271511040186860546ULL;
long long int var_1 = -6916635613262758570LL;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)19338;
int zero = 0;
unsigned long long int var_10 = 5424118105931293120ULL;
unsigned long long int var_11 = 5724156845774261140ULL;
unsigned short var_12 = (unsigned short)11027;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
