#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)44;
unsigned long long int var_9 = 8035961090006592350ULL;
int zero = 0;
signed char var_20 = (signed char)78;
unsigned char var_21 = (unsigned char)25;
unsigned short var_22 = (unsigned short)52393;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
