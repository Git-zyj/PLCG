#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5431291057568778295LL;
long long int var_2 = 5724448066279832863LL;
_Bool var_4 = (_Bool)1;
long long int var_9 = -3544338402772002177LL;
int zero = 0;
unsigned char var_11 = (unsigned char)63;
long long int var_12 = -6072235419030231630LL;
long long int var_13 = 3156761206248938752LL;
unsigned long long int var_14 = 17155524560043830110ULL;
unsigned long long int var_15 = 788581971717357202ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
