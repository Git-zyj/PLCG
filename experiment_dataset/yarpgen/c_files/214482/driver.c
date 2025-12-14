#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 830852310U;
unsigned int var_4 = 993373180U;
_Bool var_6 = (_Bool)1;
long long int var_8 = 2874559312478645641LL;
int zero = 0;
long long int var_10 = 1353286270028067914LL;
unsigned short var_11 = (unsigned short)53749;
unsigned int var_12 = 1494993868U;
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
