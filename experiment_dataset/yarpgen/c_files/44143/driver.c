#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_4 = -932838439;
long long int var_6 = 888955955492412266LL;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)195;
int zero = 0;
signed char var_11 = (signed char)-126;
unsigned long long int var_12 = 12975911703530763640ULL;
unsigned long long int var_13 = 15706449725755703410ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
