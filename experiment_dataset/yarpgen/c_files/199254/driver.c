#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_3 = 3471481937677475508ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 4228067101970274937ULL;
short var_14 = (short)20188;
unsigned long long int var_17 = 12565317439350160435ULL;
int zero = 0;
long long int var_18 = -4403342445688286081LL;
unsigned char var_19 = (unsigned char)72;
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
