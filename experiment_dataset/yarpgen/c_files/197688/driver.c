#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 186403688;
_Bool var_9 = (_Bool)0;
long long int var_10 = -6148057615012181019LL;
unsigned long long int var_11 = 9832384555348375502ULL;
long long int var_12 = -932167457076609707LL;
int zero = 0;
unsigned char var_15 = (unsigned char)91;
unsigned long long int var_16 = 2270075351887997378ULL;
short var_17 = (short)-27967;
signed char var_18 = (signed char)-21;
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
