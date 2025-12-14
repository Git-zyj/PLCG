#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)120;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)66;
signed char var_3 = (signed char)112;
unsigned short var_5 = (unsigned short)56284;
long long int var_7 = 3148204959067562937LL;
long long int var_9 = -5761387684488855526LL;
unsigned short var_13 = (unsigned short)53407;
int zero = 0;
unsigned long long int var_15 = 17205000308132645065ULL;
int var_16 = -1786317308;
unsigned short var_17 = (unsigned short)14794;
unsigned short var_18 = (unsigned short)16847;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
