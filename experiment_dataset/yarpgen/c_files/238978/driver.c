#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1614112400;
_Bool var_1 = (_Bool)1;
unsigned char var_6 = (unsigned char)108;
long long int var_9 = -87158680342156199LL;
unsigned long long int var_11 = 9814313452048757113ULL;
unsigned long long int var_13 = 17297167661903251796ULL;
int zero = 0;
unsigned long long int var_15 = 13931238159334693629ULL;
unsigned long long int var_16 = 6338727518800609482ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
