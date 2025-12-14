#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1343909261;
unsigned int var_1 = 1969970765U;
unsigned int var_2 = 1948296800U;
unsigned int var_6 = 1171617521U;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 327785545U;
signed char var_15 = (signed char)-51;
long long int var_17 = 2235944904590498601LL;
int zero = 0;
signed char var_18 = (signed char)105;
unsigned short var_19 = (unsigned short)31160;
void init() {
}

void checksum() {
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
