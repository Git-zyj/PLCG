#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7081077320026064814LL;
unsigned short var_9 = (unsigned short)62189;
long long int var_12 = 2053017478185219391LL;
int var_13 = -800954924;
int var_14 = 975165366;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3983709629U;
short var_20 = (short)-32074;
unsigned short var_21 = (unsigned short)22361;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
