#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8602274239748609421ULL;
signed char var_8 = (signed char)118;
unsigned long long int var_9 = 16917262039965046339ULL;
signed char var_11 = (signed char)-61;
int var_13 = -1443731266;
unsigned int var_14 = 2773758074U;
int zero = 0;
unsigned char var_16 = (unsigned char)16;
unsigned char var_17 = (unsigned char)61;
unsigned int var_18 = 756803683U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
