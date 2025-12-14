#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7509239025306344863LL;
unsigned int var_1 = 353018551U;
unsigned int var_2 = 3903020517U;
unsigned short var_3 = (unsigned short)18101;
_Bool var_4 = (_Bool)0;
int var_5 = -656627817;
unsigned short var_7 = (unsigned short)6676;
unsigned long long int var_8 = 3647745002999643824ULL;
unsigned char var_10 = (unsigned char)225;
_Bool var_12 = (_Bool)0;
unsigned short var_15 = (unsigned short)57874;
int zero = 0;
unsigned short var_16 = (unsigned short)49524;
unsigned long long int var_17 = 13818267942352502807ULL;
long long int var_18 = 8749825026155849629LL;
unsigned int var_19 = 3854988464U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
