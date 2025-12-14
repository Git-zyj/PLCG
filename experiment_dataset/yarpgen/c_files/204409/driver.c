#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11426091210401962830ULL;
long long int var_3 = 7312752654209746205LL;
_Bool var_4 = (_Bool)1;
long long int var_5 = 2400355523326793734LL;
short var_6 = (short)-13890;
unsigned long long int var_7 = 7806937971950758978ULL;
unsigned int var_9 = 3823065274U;
unsigned int var_10 = 2486628547U;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)111;
long long int var_13 = 2067711091127430040LL;
unsigned long long int var_14 = 13538731356331810691ULL;
long long int var_15 = -8799924099303464761LL;
unsigned short var_16 = (unsigned short)1029;
void init() {
}

void checksum() {
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
