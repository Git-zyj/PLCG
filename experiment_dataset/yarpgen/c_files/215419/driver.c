#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-5962;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 4324178828785818360ULL;
long long int var_12 = 6589107687871569507LL;
unsigned int var_13 = 2445167736U;
unsigned long long int var_15 = 15048544415208468558ULL;
unsigned long long int var_16 = 6486801037589943328ULL;
int zero = 0;
unsigned long long int var_18 = 16324730488622155498ULL;
_Bool var_19 = (_Bool)1;
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
