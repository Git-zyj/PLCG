#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3607450883185163272ULL;
unsigned long long int var_1 = 3772344029047300812ULL;
int var_3 = -247285736;
unsigned long long int var_5 = 2858737499132937520ULL;
long long int var_6 = -2915159541919366380LL;
short var_7 = (short)29662;
short var_8 = (short)15870;
long long int var_11 = 3077516658355041498LL;
unsigned short var_17 = (unsigned short)4916;
long long int var_18 = 52698939202540031LL;
int zero = 0;
short var_20 = (short)28182;
int var_21 = 830925829;
unsigned char var_22 = (unsigned char)47;
void init() {
}

void checksum() {
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
