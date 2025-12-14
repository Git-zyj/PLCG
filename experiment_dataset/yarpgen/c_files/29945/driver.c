#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)0;
signed char var_4 = (signed char)-51;
long long int var_7 = -5015164362840194561LL;
signed char var_8 = (signed char)-70;
signed char var_9 = (signed char)-35;
int zero = 0;
long long int var_12 = -7972993469003060257LL;
long long int var_13 = 708496958491972562LL;
long long int var_14 = -3605637369871076890LL;
signed char var_15 = (signed char)-68;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
