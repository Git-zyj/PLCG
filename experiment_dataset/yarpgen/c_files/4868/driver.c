#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1666307368;
unsigned char var_2 = (unsigned char)207;
unsigned char var_3 = (unsigned char)126;
unsigned long long int var_5 = 13332368575333566450ULL;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)18;
unsigned long long int var_11 = 3648518274257554162ULL;
unsigned long long int var_12 = 4413406632173384580ULL;
unsigned long long int var_13 = 17194650566549033886ULL;
int zero = 0;
short var_16 = (short)-1038;
unsigned char var_17 = (unsigned char)76;
void init() {
}

void checksum() {
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
