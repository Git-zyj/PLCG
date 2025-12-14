#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4195952635U;
unsigned int var_3 = 1325026022U;
long long int var_4 = 2335166910110873093LL;
short var_9 = (short)-31838;
short var_11 = (short)-5117;
int var_13 = -1659009593;
unsigned long long int var_15 = 14519528958647528743ULL;
unsigned long long int var_16 = 2181047924854825802ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2655019522U;
unsigned short var_20 = (unsigned short)36978;
unsigned int var_21 = 3670873744U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
