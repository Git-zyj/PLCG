#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5341184673042797116LL;
long long int var_5 = -4388966709849343978LL;
signed char var_7 = (signed char)-103;
unsigned int var_8 = 3951707818U;
short var_9 = (short)26278;
unsigned long long int var_10 = 15576814114878518524ULL;
unsigned long long int var_12 = 10218490098971642722ULL;
long long int var_13 = 6685976059076933193LL;
int zero = 0;
signed char var_14 = (signed char)-83;
unsigned long long int var_15 = 142520408697518796ULL;
int var_16 = -1285856189;
long long int var_17 = -4931103133803014243LL;
unsigned long long int var_18 = 13283557327511761305ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
