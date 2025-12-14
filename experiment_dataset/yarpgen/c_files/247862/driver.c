#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14928019317925018268ULL;
_Bool var_1 = (_Bool)0;
unsigned int var_5 = 3400240099U;
long long int var_7 = 6684761756886612146LL;
int var_9 = -1144058143;
long long int var_12 = -3118819323911853577LL;
int zero = 0;
unsigned char var_16 = (unsigned char)221;
_Bool var_17 = (_Bool)0;
long long int var_18 = -3182706666994483859LL;
unsigned int var_19 = 1454732883U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
