#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4678797017949679330LL;
long long int var_1 = 1331618859934986469LL;
unsigned int var_3 = 3041508467U;
long long int var_4 = -8438475105629836343LL;
unsigned char var_5 = (unsigned char)244;
unsigned int var_6 = 2577587401U;
long long int var_8 = 704041517747967931LL;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 4015320229U;
short var_14 = (short)-6290;
unsigned int var_15 = 1848259917U;
long long int var_16 = -2102804263138021629LL;
long long int var_17 = 8351396159367786938LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-827;
unsigned int var_21 = 3056928959U;
short var_22 = (short)13348;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
