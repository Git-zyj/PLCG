#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 216675431U;
unsigned char var_5 = (unsigned char)154;
unsigned long long int var_7 = 8526836430893116000ULL;
unsigned int var_14 = 1592175954U;
unsigned long long int var_15 = 3226444848369973830ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3975988890U;
long long int var_19 = -3238086086143850559LL;
void init() {
}

void checksum() {
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
