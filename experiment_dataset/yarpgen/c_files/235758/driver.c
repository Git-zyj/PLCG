#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11733745586340754697ULL;
int var_2 = -643303085;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-31736;
signed char var_5 = (signed char)90;
_Bool var_6 = (_Bool)0;
int var_7 = -840056055;
signed char var_8 = (signed char)125;
long long int var_9 = -4629362383881577421LL;
unsigned int var_10 = 8920961U;
long long int var_11 = 6202112758776938481LL;
unsigned int var_13 = 3754650435U;
unsigned int var_14 = 2410251995U;
long long int var_15 = -2417884860560956754LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)118;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
