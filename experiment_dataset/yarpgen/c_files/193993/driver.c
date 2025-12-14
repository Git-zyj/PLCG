#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)16170;
int var_6 = 1480245435;
long long int var_9 = -461873192626366103LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 4091969155310451861ULL;
unsigned long long int var_19 = 15408492583124866553ULL;
void init() {
}

void checksum() {
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
