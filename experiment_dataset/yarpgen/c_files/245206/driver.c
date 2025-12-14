#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = 1573727967;
unsigned int var_4 = 3013124948U;
unsigned int var_5 = 3128244453U;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 1725229426U;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned short var_12 = (unsigned short)26974;
short var_13 = (short)16801;
int var_14 = 1370819421;
unsigned long long int var_16 = 10785668000671756448ULL;
unsigned short var_17 = (unsigned short)1781;
unsigned long long int var_18 = 12552483490022199884ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)16719;
unsigned short var_21 = (unsigned short)14734;
int var_22 = -1767053432;
unsigned short var_23 = (unsigned short)23108;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
