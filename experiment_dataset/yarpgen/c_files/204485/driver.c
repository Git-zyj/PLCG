#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5270977434407129835LL;
unsigned int var_2 = 1545025277U;
signed char var_3 = (signed char)93;
_Bool var_7 = (_Bool)0;
long long int var_9 = -3733531686429834890LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)14809;
signed char var_18 = (signed char)-9;
long long int var_19 = 4101472835863353188LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
