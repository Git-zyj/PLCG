#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6277009217132167623LL;
unsigned char var_1 = (unsigned char)171;
unsigned long long int var_3 = 16072108441702123282ULL;
long long int var_4 = 8048993121431832736LL;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)198;
short var_7 = (short)-3261;
unsigned long long int var_8 = 9038068171011171527ULL;
unsigned short var_9 = (unsigned short)19355;
int zero = 0;
unsigned long long int var_10 = 2315444075206570393ULL;
long long int var_11 = 1671347894888488042LL;
signed char var_12 = (signed char)57;
unsigned char var_13 = (unsigned char)161;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
