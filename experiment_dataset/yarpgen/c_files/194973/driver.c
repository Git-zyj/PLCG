#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2751798914559795544LL;
long long int var_9 = -3231298950466412974LL;
_Bool var_10 = (_Bool)0;
long long int var_11 = -7589315928721325683LL;
signed char var_15 = (signed char)81;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = 84307744892621014LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
