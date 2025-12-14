#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1042033809809700973ULL;
int var_1 = -1022916036;
long long int var_3 = -6057106141508960319LL;
unsigned short var_4 = (unsigned short)57436;
unsigned long long int var_6 = 17192392405645315906ULL;
int var_7 = 153951925;
long long int var_10 = -526763966341937589LL;
int zero = 0;
short var_11 = (short)18445;
unsigned long long int var_12 = 5333983259083250569ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
