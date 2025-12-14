#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = 1857930563;
unsigned int var_6 = 3978536217U;
signed char var_8 = (signed char)120;
long long int var_9 = 960044598800681384LL;
int var_11 = 1023270647;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-66;
void init() {
}

void checksum() {
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
