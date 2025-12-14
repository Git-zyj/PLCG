#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8965052371762919804LL;
unsigned long long int var_2 = 12642922313843632043ULL;
unsigned long long int var_3 = 9430565107455868923ULL;
signed char var_10 = (signed char)61;
signed char var_12 = (signed char)124;
short var_13 = (short)20913;
int zero = 0;
unsigned int var_14 = 215181007U;
int var_15 = 1504549919;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 6845533359455393420ULL;
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
