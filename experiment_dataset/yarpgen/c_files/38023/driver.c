#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2309842293U;
signed char var_4 = (signed char)-56;
short var_5 = (short)18109;
int var_7 = 1022023483;
long long int var_8 = -1975419049556916517LL;
int var_15 = -1264966929;
unsigned int var_16 = 2376695185U;
int zero = 0;
unsigned long long int var_19 = 5279905257836452023ULL;
int var_20 = 348446130;
signed char var_21 = (signed char)-15;
long long int var_22 = 6029184371506377321LL;
void init() {
}

void checksum() {
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
