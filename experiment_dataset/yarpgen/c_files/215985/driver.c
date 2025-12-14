#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1854492075269010332LL;
signed char var_2 = (signed char)-77;
long long int var_3 = -4097026831893641740LL;
_Bool var_5 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)124;
short var_18 = (short)30144;
unsigned long long int var_19 = 3131644969784484189ULL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
