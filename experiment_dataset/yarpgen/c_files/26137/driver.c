#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17590040600899969421ULL;
int var_3 = 42950846;
int var_9 = -887440150;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-17;
unsigned short var_15 = (unsigned short)60423;
unsigned long long int var_16 = 10190322241511712253ULL;
long long int var_17 = -6654886421734008047LL;
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
