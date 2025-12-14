#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-77;
long long int var_1 = -1003095113546816650LL;
signed char var_3 = (signed char)107;
unsigned long long int var_5 = 12531367576342252106ULL;
long long int var_7 = -2577852330515256422LL;
signed char var_8 = (signed char)-4;
long long int var_12 = 6706149909483878008LL;
signed char var_16 = (signed char)1;
int zero = 0;
unsigned short var_18 = (unsigned short)44520;
short var_19 = (short)-2675;
void init() {
}

void checksum() {
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
