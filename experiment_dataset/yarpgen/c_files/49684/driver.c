#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 554626713013468342LL;
long long int var_3 = -1269636254771310816LL;
unsigned int var_4 = 3314774542U;
long long int var_5 = -4078628029700216830LL;
unsigned char var_6 = (unsigned char)77;
long long int var_7 = -5862680565840887500LL;
long long int var_9 = -4021465977917656368LL;
int zero = 0;
unsigned int var_11 = 2361767668U;
long long int var_12 = 2018368150541918089LL;
long long int var_13 = 1647298945877333949LL;
unsigned int var_14 = 623750107U;
long long int var_15 = 6730442473209159375LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
