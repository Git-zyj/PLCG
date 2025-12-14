#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_4 = (short)-8766;
unsigned long long int var_5 = 8397469259850717704ULL;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 168003012U;
unsigned int var_11 = 864226004U;
unsigned int var_12 = 746416938U;
signed char var_13 = (signed char)-81;
long long int var_15 = 5021830724523360585LL;
int zero = 0;
signed char var_17 = (signed char)-66;
signed char var_18 = (signed char)-103;
int var_19 = 188918376;
unsigned long long int var_20 = 12365464649983530133ULL;
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
