#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)42862;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)193;
int zero = 0;
long long int var_16 = 7275290359318045779LL;
signed char var_17 = (signed char)127;
long long int var_18 = -174293729429942031LL;
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
