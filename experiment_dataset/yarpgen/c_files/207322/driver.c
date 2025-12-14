#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8208501274982451030ULL;
int var_5 = 1419386462;
long long int var_14 = -2062789434671834259LL;
int zero = 0;
int var_16 = 595188706;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)9;
unsigned char var_19 = (unsigned char)121;
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
