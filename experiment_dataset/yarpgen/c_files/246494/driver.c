#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)57504;
signed char var_5 = (signed char)41;
unsigned long long int var_9 = 3363326288108363305ULL;
unsigned long long int var_10 = 6553291668892046665ULL;
_Bool var_11 = (_Bool)1;
signed char var_15 = (signed char)-4;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 2055313737279428429ULL;
unsigned long long int var_19 = 4216109824537698544ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
