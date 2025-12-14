#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7661301170086376866LL;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)166;
long long int var_8 = 1808881964917574784LL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_13 = 14185015101356227747ULL;
unsigned char var_14 = (unsigned char)119;
unsigned char var_15 = (unsigned char)176;
unsigned long long int var_16 = 1739860396595502680ULL;
int zero = 0;
unsigned int var_17 = 3595192185U;
int var_18 = -1574926888;
unsigned long long int var_19 = 1994575967565262802ULL;
void init() {
}

void checksum() {
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
