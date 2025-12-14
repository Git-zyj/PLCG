#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17340302734057547424ULL;
_Bool var_4 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)76;
unsigned long long int var_14 = 6727647596429490014ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
