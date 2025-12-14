#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9452628921157981725ULL;
signed char var_8 = (signed char)89;
int zero = 0;
long long int var_14 = -2834653389399023753LL;
long long int var_15 = -7289601978800540211LL;
long long int var_16 = 4452648850199739537LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
