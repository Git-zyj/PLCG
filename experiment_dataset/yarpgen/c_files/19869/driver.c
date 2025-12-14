#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2341260898213101999ULL;
long long int var_3 = -9060599950034041029LL;
unsigned long long int var_7 = 9886380990196588505ULL;
signed char var_9 = (signed char)(-127 - 1);
int zero = 0;
unsigned long long int var_12 = 516841591327199374ULL;
unsigned short var_13 = (unsigned short)34631;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)18;
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
