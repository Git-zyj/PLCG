#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1368338285U;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2000338016U;
long long int var_6 = 3796845061708982075LL;
unsigned int var_8 = 1270989634U;
unsigned long long int var_9 = 6409296338470571762ULL;
unsigned int var_10 = 1159091020U;
unsigned long long int var_11 = 16148509359314732903ULL;
long long int var_12 = -4045114054691861609LL;
int zero = 0;
unsigned long long int var_13 = 1313844534907932649ULL;
short var_14 = (short)-18080;
signed char var_15 = (signed char)81;
short var_16 = (short)-26908;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
