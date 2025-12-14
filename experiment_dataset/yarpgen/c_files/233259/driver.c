#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9115749590019552950LL;
unsigned long long int var_2 = 15050726790842655840ULL;
unsigned short var_5 = (unsigned short)41842;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)2;
long long int var_15 = 7478320898647874995LL;
void init() {
}

void checksum() {
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
