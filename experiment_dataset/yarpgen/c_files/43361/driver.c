#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53058;
unsigned long long int var_3 = 17282449881383468095ULL;
int var_6 = -1880023627;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)5537;
unsigned long long int var_18 = 6517772946387570011ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
