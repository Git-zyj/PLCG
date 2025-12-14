#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)24;
unsigned long long int var_4 = 8109748311157282947ULL;
unsigned int var_5 = 937765299U;
unsigned char var_6 = (unsigned char)111;
short var_13 = (short)28362;
long long int var_14 = -8316905514789846053LL;
unsigned long long int var_17 = 9183586184457748155ULL;
int zero = 0;
signed char var_18 = (signed char)50;
int var_19 = 618141757;
unsigned long long int var_20 = 5483247459669743829ULL;
long long int var_21 = -7894190661223735809LL;
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
