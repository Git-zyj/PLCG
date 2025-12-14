#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2151845084U;
unsigned long long int var_2 = 12085118425279581876ULL;
unsigned int var_4 = 2872568278U;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)247;
unsigned long long int var_13 = 3385158363715265497ULL;
long long int var_14 = -562634796527591040LL;
int zero = 0;
unsigned char var_15 = (unsigned char)37;
unsigned long long int var_16 = 16080009852829501324ULL;
unsigned char var_17 = (unsigned char)80;
unsigned char var_18 = (unsigned char)155;
unsigned long long int var_19 = 11227752698936360507ULL;
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
