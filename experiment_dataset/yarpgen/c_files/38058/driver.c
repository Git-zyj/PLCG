#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-125;
unsigned int var_1 = 1421119624U;
long long int var_6 = -8605542859158417869LL;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)-77;
unsigned short var_11 = (unsigned short)53579;
unsigned int var_13 = 3699530326U;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
