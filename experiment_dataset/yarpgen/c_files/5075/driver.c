#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -310478233055783163LL;
long long int var_2 = -3378844771451496738LL;
long long int var_5 = 8905180647127084485LL;
short var_12 = (short)16654;
int zero = 0;
unsigned int var_14 = 2467230441U;
long long int var_15 = 4731559154010747439LL;
short var_16 = (short)26808;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
