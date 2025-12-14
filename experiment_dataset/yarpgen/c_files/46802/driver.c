#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6335204850416175188LL;
unsigned long long int var_1 = 863985883900570365ULL;
long long int var_4 = 6458518472522821655LL;
signed char var_8 = (signed char)56;
unsigned char var_9 = (unsigned char)64;
long long int var_10 = 4151073872374274482LL;
long long int var_11 = 1116954966430503256LL;
int zero = 0;
short var_14 = (short)-14662;
signed char var_15 = (signed char)28;
signed char var_16 = (signed char)51;
void init() {
}

void checksum() {
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
