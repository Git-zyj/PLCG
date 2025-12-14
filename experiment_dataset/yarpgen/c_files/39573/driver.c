#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7542268019351727462LL;
unsigned long long int var_6 = 9399629117732298224ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)31;
int var_16 = -1454614188;
unsigned short var_17 = (unsigned short)673;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3628038024U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
