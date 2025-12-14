#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-73;
long long int var_2 = 5681174036659042658LL;
unsigned short var_4 = (unsigned short)46533;
unsigned long long int var_6 = 682969980924179368ULL;
unsigned char var_9 = (unsigned char)9;
int var_10 = -313465452;
signed char var_11 = (signed char)-66;
_Bool var_12 = (_Bool)1;
int var_14 = 603009418;
int var_15 = -1767704733;
long long int var_16 = 9141611291645061193LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)94;
unsigned long long int var_19 = 18234693381361935630ULL;
unsigned int var_20 = 2587821797U;
void init() {
}

void checksum() {
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
