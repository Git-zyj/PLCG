#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -555089779874995053LL;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)64946;
signed char var_9 = (signed char)-118;
int zero = 0;
unsigned long long int var_17 = 5475961877466356798ULL;
unsigned int var_18 = 1112287702U;
unsigned int var_19 = 3796069655U;
int var_20 = -183064639;
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
