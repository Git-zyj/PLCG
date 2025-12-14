#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21823;
int var_1 = 1983008804;
short var_2 = (short)27172;
unsigned int var_3 = 2707796454U;
long long int var_4 = -1968117543426126004LL;
unsigned short var_5 = (unsigned short)61708;
short var_6 = (short)-14911;
short var_7 = (short)-15561;
long long int var_9 = -6412441515204556870LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 644849098U;
unsigned long long int var_12 = 11500332779599633890ULL;
unsigned short var_13 = (unsigned short)26243;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)24631;
long long int var_16 = 2381120852734132502LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
