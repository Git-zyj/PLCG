#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)82;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int var_9 = -609082355;
unsigned long long int var_11 = 4017711117932923891ULL;
unsigned int var_13 = 3449223390U;
int var_14 = -1672837856;
unsigned long long int var_18 = 8391123810902500887ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 519121259455767082LL;
int var_22 = 1736526708;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
