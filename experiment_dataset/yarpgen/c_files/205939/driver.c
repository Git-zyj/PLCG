#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)220;
long long int var_2 = 6834104452661096089LL;
signed char var_4 = (signed char)-115;
signed char var_5 = (signed char)-112;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)-103;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
