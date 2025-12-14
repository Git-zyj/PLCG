#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6730760866976486154LL;
unsigned long long int var_3 = 4418136349732568678ULL;
long long int var_4 = 137525592729208727LL;
unsigned short var_6 = (unsigned short)24188;
unsigned char var_7 = (unsigned char)191;
unsigned short var_8 = (unsigned short)64413;
int var_9 = -2010976393;
long long int var_10 = -5049051754953679035LL;
unsigned int var_11 = 1944182338U;
_Bool var_14 = (_Bool)1;
long long int var_17 = 7238825703409252748LL;
unsigned int var_19 = 203342159U;
int zero = 0;
unsigned char var_20 = (unsigned char)88;
long long int var_21 = 8757781280884466116LL;
long long int var_22 = -4766378478470145907LL;
long long int var_23 = -1966880276985184568LL;
unsigned long long int var_24 = 3521811351821548352ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
