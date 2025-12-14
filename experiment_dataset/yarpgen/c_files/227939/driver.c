#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2564731923536723817ULL;
unsigned long long int var_1 = 12865192435246600663ULL;
unsigned long long int var_2 = 12504898825335522501ULL;
long long int var_13 = 8715985640554218388LL;
unsigned long long int var_16 = 7785492575395383583ULL;
int zero = 0;
unsigned long long int var_18 = 15885951188387576933ULL;
short var_19 = (short)-4540;
_Bool var_20 = (_Bool)0;
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
