#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2916870471967941132LL;
int var_1 = 1362295335;
int var_2 = -1058557590;
long long int var_3 = -7035357460542903131LL;
unsigned short var_4 = (unsigned short)16116;
int var_5 = 2113187488;
unsigned int var_6 = 1420922337U;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 12310717622927478769ULL;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)46385;
int var_12 = -20645907;
long long int var_13 = -3826445298679529667LL;
int zero = 0;
long long int var_14 = 9048653391767992227LL;
unsigned int var_15 = 2249096408U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
