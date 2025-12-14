#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62509;
signed char var_2 = (signed char)-56;
signed char var_4 = (signed char)-49;
unsigned int var_8 = 3392326818U;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)59119;
int zero = 0;
unsigned short var_14 = (unsigned short)18300;
int var_15 = -1058112850;
_Bool var_16 = (_Bool)0;
long long int var_17 = -4876307733536311376LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
