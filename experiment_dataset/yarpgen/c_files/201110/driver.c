#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23839;
long long int var_2 = -7236265556198744962LL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)502;
short var_5 = (short)13523;
signed char var_6 = (signed char)-23;
long long int var_7 = -2070154404319287704LL;
unsigned int var_9 = 3979058594U;
int var_10 = 1437064154;
unsigned long long int var_11 = 2289052924274291092ULL;
long long int var_14 = -8736175141612181252LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 961726405U;
unsigned long long int var_17 = 6024818763755701801ULL;
unsigned int var_18 = 2730114782U;
int var_19 = 77903117;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
