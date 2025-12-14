#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5310323034522625956LL;
long long int var_1 = 6890180432494024986LL;
long long int var_4 = 4787031434020541333LL;
long long int var_9 = 5973599837827553787LL;
long long int var_10 = -5471139762630175702LL;
long long int var_12 = -7674672834424051849LL;
int zero = 0;
long long int var_17 = -4486455299936432882LL;
long long int var_18 = 1747539842450953830LL;
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
