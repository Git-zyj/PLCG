#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7528343933679607015LL;
unsigned long long int var_3 = 16944324295654812330ULL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)23;
unsigned long long int var_11 = 5073441764470765ULL;
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
