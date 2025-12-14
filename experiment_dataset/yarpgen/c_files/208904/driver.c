#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3961411959059916848LL;
unsigned long long int var_4 = 6988383172700505786ULL;
long long int var_6 = 7857047882729180529LL;
unsigned char var_8 = (unsigned char)160;
_Bool var_9 = (_Bool)1;
short var_11 = (short)8699;
int var_12 = 2098619662;
long long int var_13 = -8342306808662731844LL;
int zero = 0;
unsigned char var_14 = (unsigned char)38;
short var_15 = (short)13165;
void init() {
}

void checksum() {
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
