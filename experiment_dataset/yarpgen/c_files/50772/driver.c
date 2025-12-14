#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-72;
short var_2 = (short)25644;
signed char var_3 = (signed char)91;
unsigned char var_4 = (unsigned char)80;
long long int var_5 = -5922513316083312689LL;
long long int var_12 = 1800351996762388879LL;
long long int var_14 = 7176503047168582486LL;
int var_16 = -1642497732;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)36;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
