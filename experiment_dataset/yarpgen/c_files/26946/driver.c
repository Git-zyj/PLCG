#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1541784311;
short var_4 = (short)-2845;
unsigned long long int var_8 = 4007185375576672446ULL;
int var_10 = 1274161802;
unsigned short var_13 = (unsigned short)40412;
unsigned long long int var_15 = 11240987258051429411ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)114;
unsigned short var_21 = (unsigned short)18399;
long long int var_22 = -4145748867261417897LL;
void init() {
}

void checksum() {
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
