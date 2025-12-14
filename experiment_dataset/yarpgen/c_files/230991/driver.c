#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2691925848U;
_Bool var_3 = (_Bool)1;
long long int var_7 = 5357465276864896233LL;
long long int var_8 = 5528532398080540156LL;
long long int var_9 = 1359748513368268315LL;
signed char var_11 = (signed char)-28;
unsigned long long int var_12 = 6464583632448221479ULL;
unsigned short var_15 = (unsigned short)13385;
int zero = 0;
long long int var_16 = 5250050075594953655LL;
unsigned char var_17 = (unsigned char)13;
unsigned int var_18 = 4071001459U;
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
