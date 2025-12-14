#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31672;
unsigned short var_3 = (unsigned short)3315;
long long int var_5 = 7180808318794406060LL;
short var_9 = (short)13676;
int zero = 0;
unsigned long long int var_11 = 11696732535178671843ULL;
short var_12 = (short)-12958;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3053702028U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
