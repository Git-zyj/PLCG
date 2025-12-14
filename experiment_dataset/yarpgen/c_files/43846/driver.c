#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-115;
unsigned short var_4 = (unsigned short)23296;
long long int var_16 = -6752358041024372727LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-19;
long long int var_19 = 4805415561457381408LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
