#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4992265857875111781LL;
unsigned int var_1 = 2722435772U;
_Bool var_2 = (_Bool)0;
int var_6 = 1810309147;
long long int var_7 = -4793770076357031847LL;
long long int var_9 = 4301729393812125766LL;
int var_12 = -153549630;
int zero = 0;
unsigned short var_16 = (unsigned short)38443;
int var_17 = 1913495816;
unsigned long long int var_18 = 9263868771204491196ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
