#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)151;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 10282842582472941180ULL;
short var_10 = (short)-11673;
int zero = 0;
unsigned int var_13 = 1718993998U;
long long int var_14 = 7538039164867811278LL;
unsigned long long int var_15 = 18354454596585292821ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
