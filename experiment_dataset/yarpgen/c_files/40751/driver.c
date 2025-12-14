#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1761634750834112583ULL;
unsigned long long int var_1 = 5751215106282389112ULL;
unsigned long long int var_6 = 7991881790013619230ULL;
long long int var_7 = 3837624003007902258LL;
unsigned long long int var_10 = 10423766284034884381ULL;
long long int var_13 = 4117678526585325959LL;
unsigned long long int var_14 = 1032548318686532149ULL;
int zero = 0;
unsigned long long int var_15 = 7028163948597416392ULL;
long long int var_16 = 1173567309786016467LL;
short var_17 = (short)29273;
short var_18 = (short)14922;
void init() {
}

void checksum() {
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
