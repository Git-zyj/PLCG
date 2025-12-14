#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10393106378296644361ULL;
unsigned long long int var_3 = 16244147357106253260ULL;
long long int var_10 = -4628595970886250593LL;
long long int var_11 = -2525479571014148050LL;
signed char var_13 = (signed char)-23;
int zero = 0;
short var_17 = (short)-11456;
long long int var_18 = -6382761769595097316LL;
void init() {
}

void checksum() {
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
