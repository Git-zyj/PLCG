#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-101;
signed char var_2 = (signed char)-39;
_Bool var_5 = (_Bool)0;
unsigned int var_9 = 4263328206U;
signed char var_10 = (signed char)10;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_18 = 849653538;
int var_19 = 111702068;
_Bool var_20 = (_Bool)1;
int var_21 = -620955279;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
