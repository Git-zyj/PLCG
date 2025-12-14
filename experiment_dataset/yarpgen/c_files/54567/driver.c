#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4359843206796894501LL;
signed char var_2 = (signed char)-47;
int var_3 = -1228382740;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
short var_15 = (short)-1872;
int zero = 0;
signed char var_17 = (signed char)-73;
signed char var_18 = (signed char)-77;
unsigned short var_19 = (unsigned short)20544;
void init() {
}

void checksum() {
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
