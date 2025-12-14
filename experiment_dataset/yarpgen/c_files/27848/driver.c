#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30917;
short var_2 = (short)-5785;
long long int var_4 = -5186032403557968901LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 14475616459319438896ULL;
int var_9 = 541587964;
int zero = 0;
long long int var_20 = -5306999563836891671LL;
long long int var_21 = -4457965568189141127LL;
unsigned char var_22 = (unsigned char)71;
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
