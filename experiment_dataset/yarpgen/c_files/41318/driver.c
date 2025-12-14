#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)133;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)22994;
unsigned int var_7 = 463371388U;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_10 = (short)13182;
long long int var_11 = 7451100028574262434LL;
unsigned long long int var_12 = 11063530262046725076ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
