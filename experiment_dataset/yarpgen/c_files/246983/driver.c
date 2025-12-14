#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3780753501250636285LL;
int var_1 = 1080302737;
long long int var_4 = 1260863791350273200LL;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)64;
long long int var_11 = -5157188607053462709LL;
int zero = 0;
unsigned char var_12 = (unsigned char)237;
unsigned short var_13 = (unsigned short)61309;
unsigned int var_14 = 4034185456U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
