#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2020552748;
long long int var_4 = -5548013728638467129LL;
unsigned long long int var_6 = 5720564231580356189ULL;
unsigned short var_7 = (unsigned short)61110;
unsigned short var_9 = (unsigned short)34533;
unsigned int var_12 = 1311789966U;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = -1262312112017375815LL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
