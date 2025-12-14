#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)168;
unsigned long long int var_1 = 9368820979377881503ULL;
int var_2 = -1683427843;
_Bool var_5 = (_Bool)1;
signed char var_9 = (signed char)46;
int var_11 = -305265873;
short var_14 = (short)8980;
long long int var_15 = 3169025716692348039LL;
long long int var_18 = -7438223818014545817LL;
int zero = 0;
int var_19 = -862745915;
int var_20 = 1153729022;
void init() {
}

void checksum() {
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
