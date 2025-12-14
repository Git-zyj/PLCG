#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 492229006;
unsigned long long int var_1 = 14241510864264255568ULL;
int var_2 = 1971121294;
long long int var_4 = 4638243659164591587LL;
short var_5 = (short)21902;
int zero = 0;
long long int var_10 = -2945572106093116951LL;
long long int var_11 = 3813684615436897723LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
