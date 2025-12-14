#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)67;
long long int var_1 = -416304776137800514LL;
unsigned long long int var_3 = 4613692111719970385ULL;
signed char var_5 = (signed char)-33;
signed char var_7 = (signed char)-25;
long long int var_9 = -431198859613432565LL;
short var_13 = (short)26725;
int zero = 0;
unsigned long long int var_14 = 6080756524513909773ULL;
signed char var_15 = (signed char)0;
unsigned int var_16 = 2187650208U;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
