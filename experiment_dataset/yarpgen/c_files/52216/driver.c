#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)-3612;
_Bool var_4 = (_Bool)0;
long long int var_7 = -3370946836934614475LL;
int var_9 = -520988899;
unsigned long long int var_10 = 3293971345610188639ULL;
signed char var_11 = (signed char)101;
short var_15 = (short)26725;
int zero = 0;
int var_16 = 880979953;
long long int var_17 = -1997855168645312975LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
