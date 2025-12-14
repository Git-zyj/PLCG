#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2237748349122264772LL;
_Bool var_5 = (_Bool)0;
signed char var_8 = (signed char)44;
short var_9 = (short)-11648;
long long int var_10 = 7008752525680819151LL;
int zero = 0;
unsigned char var_12 = (unsigned char)211;
short var_13 = (short)-8004;
_Bool var_14 = (_Bool)0;
long long int var_15 = 5469137968464891166LL;
unsigned long long int var_16 = 3181897399264241732ULL;
long long int var_17 = -330479315696401342LL;
short var_18 = (short)31022;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
