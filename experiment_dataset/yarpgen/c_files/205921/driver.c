#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 576432684434949000LL;
unsigned long long int var_3 = 10061464749479588118ULL;
long long int var_7 = -5924556198749926220LL;
signed char var_8 = (signed char)-102;
long long int var_10 = -2714006203301071867LL;
long long int var_16 = -7478255622753498108LL;
int zero = 0;
unsigned short var_18 = (unsigned short)57757;
long long int var_19 = 6096998791071976020LL;
unsigned int var_20 = 3402604480U;
long long int var_21 = -9023827300547786100LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
