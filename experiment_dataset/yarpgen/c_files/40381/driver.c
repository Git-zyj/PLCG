#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 210239110;
unsigned long long int var_2 = 17678573147153903805ULL;
int var_4 = -1045841884;
_Bool var_5 = (_Bool)0;
long long int var_8 = -7880471626377830582LL;
int var_9 = 1370567030;
_Bool var_13 = (_Bool)1;
long long int var_15 = 199152236552650641LL;
int zero = 0;
unsigned int var_16 = 4022083931U;
long long int var_17 = -8843546631319052062LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
