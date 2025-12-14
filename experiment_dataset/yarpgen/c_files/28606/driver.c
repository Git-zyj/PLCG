#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1982324427;
_Bool var_9 = (_Bool)0;
long long int var_11 = -2906079637903320664LL;
int zero = 0;
int var_12 = -702336193;
int var_13 = -1118104615;
short var_14 = (short)-6541;
unsigned long long int var_15 = 13422129663043015023ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
