#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1555843769077249572LL;
long long int var_9 = -4579823257971242713LL;
int zero = 0;
unsigned char var_10 = (unsigned char)22;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1564692934U;
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
