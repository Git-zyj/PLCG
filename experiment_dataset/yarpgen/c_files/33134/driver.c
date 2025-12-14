#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 404490356U;
unsigned long long int var_5 = 15084296742106277590ULL;
int var_6 = -1821431112;
long long int var_8 = -9022919661759608669LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_11 = -3588491130660061254LL;
unsigned int var_12 = 3783649463U;
int var_13 = -1446987044;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
