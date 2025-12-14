#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
short var_8 = (short)3564;
unsigned long long int var_15 = 17111585490737478876ULL;
unsigned char var_16 = (unsigned char)248;
int zero = 0;
short var_17 = (short)27963;
long long int var_18 = -4153318820436325998LL;
long long int var_19 = 1946108870651878527LL;
long long int var_20 = -4426543132461464869LL;
unsigned long long int var_21 = 18177684830652951837ULL;
short var_22 = (short)21934;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
