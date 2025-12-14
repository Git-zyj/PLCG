#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)162;
long long int var_4 = 3544691184860410730LL;
int var_5 = -1420507038;
unsigned char var_8 = (unsigned char)176;
long long int var_10 = -6630657229884237552LL;
unsigned int var_11 = 4265517842U;
signed char var_12 = (signed char)89;
int zero = 0;
int var_13 = -437702313;
long long int var_14 = -8555496285472896824LL;
long long int var_15 = -8280513531164711950LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
