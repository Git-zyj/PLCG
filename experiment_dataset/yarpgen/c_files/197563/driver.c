#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 8992734426265409770LL;
long long int var_9 = -4804279258059061531LL;
_Bool var_12 = (_Bool)1;
unsigned char var_14 = (unsigned char)121;
signed char var_15 = (signed char)-126;
int zero = 0;
signed char var_17 = (signed char)44;
unsigned short var_18 = (unsigned short)31673;
void init() {
}

void checksum() {
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
