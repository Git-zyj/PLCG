#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4678751262778121234LL;
unsigned long long int var_8 = 9863474312061992645ULL;
signed char var_9 = (signed char)108;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 5939791663055253661ULL;
unsigned int var_15 = 1771706733U;
int zero = 0;
signed char var_19 = (signed char)-114;
long long int var_20 = 9203513194970506019LL;
short var_21 = (short)-31439;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
