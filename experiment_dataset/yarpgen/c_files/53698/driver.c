#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)70;
unsigned char var_3 = (unsigned char)85;
unsigned char var_4 = (unsigned char)54;
_Bool var_7 = (_Bool)1;
int var_8 = -1822512223;
unsigned long long int var_9 = 6200339389166738291ULL;
int zero = 0;
long long int var_11 = -7042418504565782899LL;
int var_12 = -673895415;
void init() {
}

void checksum() {
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
