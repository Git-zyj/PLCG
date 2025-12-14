#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1178814095028179018ULL;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-84;
unsigned short var_5 = (unsigned short)46684;
unsigned short var_7 = (unsigned short)61662;
short var_9 = (short)30156;
_Bool var_13 = (_Bool)1;
long long int var_14 = 3685968525417519055LL;
signed char var_15 = (signed char)-22;
int zero = 0;
signed char var_16 = (signed char)-84;
short var_17 = (short)27339;
long long int var_18 = 8172483023160456795LL;
signed char var_19 = (signed char)118;
unsigned short var_20 = (unsigned short)28222;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
