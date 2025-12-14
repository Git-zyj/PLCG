#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4575196533807074212ULL;
long long int var_1 = 9019260129861271892LL;
long long int var_12 = -7685723173100668341LL;
long long int var_15 = 6547359044072718705LL;
int zero = 0;
long long int var_16 = -2636925238624227648LL;
signed char var_17 = (signed char)-98;
signed char var_18 = (signed char)-73;
_Bool var_19 = (_Bool)1;
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
