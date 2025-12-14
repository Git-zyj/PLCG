#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3997864573116843943ULL;
short var_3 = (short)31362;
long long int var_8 = -7417761808158006634LL;
unsigned long long int var_13 = 2139770741172773906ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 5158553372604714383ULL;
short var_17 = (short)24956;
unsigned long long int var_18 = 6682836141875872774ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
