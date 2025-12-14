#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6630837814947537381LL;
unsigned long long int var_2 = 772371768567180352ULL;
int var_5 = 691828712;
unsigned char var_10 = (unsigned char)130;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)44048;
long long int var_14 = -7388870173456988310LL;
unsigned char var_15 = (unsigned char)94;
void init() {
}

void checksum() {
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
