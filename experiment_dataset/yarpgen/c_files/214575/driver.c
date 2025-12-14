#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8778141179372348263LL;
_Bool var_4 = (_Bool)0;
long long int var_6 = -7159423665393843723LL;
short var_8 = (short)-20001;
int var_9 = -1248539533;
int var_10 = -2072535088;
int zero = 0;
signed char var_18 = (signed char)-95;
int var_19 = 1771547206;
unsigned long long int var_20 = 1264901006341001982ULL;
void init() {
}

void checksum() {
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
