#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)24;
unsigned long long int var_6 = 3363445086550776085ULL;
long long int var_9 = 4074867069399098696LL;
short var_10 = (short)-27784;
short var_13 = (short)16215;
int zero = 0;
long long int var_16 = 7041836156972760874LL;
int var_17 = -1045080274;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 12334483083613097866ULL;
void init() {
}

void checksum() {
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
