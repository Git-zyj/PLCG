#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 729452946;
short var_2 = (short)1483;
short var_8 = (short)-30142;
short var_9 = (short)22736;
unsigned long long int var_10 = 8358980179301980285ULL;
long long int var_11 = -2070498682525879589LL;
long long int var_13 = 6029790051893654418LL;
int zero = 0;
unsigned int var_14 = 3366539605U;
_Bool var_15 = (_Bool)0;
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
