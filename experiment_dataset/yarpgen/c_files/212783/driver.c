#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41012;
long long int var_1 = -6240987496071236775LL;
unsigned int var_2 = 5077844U;
int var_3 = -1113113488;
signed char var_4 = (signed char)83;
signed char var_5 = (signed char)-99;
unsigned int var_6 = 813329319U;
unsigned long long int var_9 = 3646251244721698956ULL;
long long int var_10 = -1658869477519501590LL;
signed char var_11 = (signed char)118;
int zero = 0;
long long int var_12 = -2979959201898130475LL;
unsigned short var_13 = (unsigned short)21026;
signed char var_14 = (signed char)96;
void init() {
}

void checksum() {
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
