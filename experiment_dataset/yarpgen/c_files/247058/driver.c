#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5561010713220622983LL;
long long int var_6 = -6565347955257714145LL;
_Bool var_7 = (_Bool)1;
long long int var_11 = 7529821247482903141LL;
int zero = 0;
unsigned short var_14 = (unsigned short)64992;
short var_15 = (short)11860;
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
