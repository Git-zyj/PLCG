#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1065309819576802374ULL;
unsigned short var_3 = (unsigned short)43904;
unsigned long long int var_4 = 6468718032598024162ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)43003;
signed char var_17 = (signed char)50;
_Bool var_18 = (_Bool)0;
long long int var_19 = 8338548000891259951LL;
void init() {
}

void checksum() {
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
