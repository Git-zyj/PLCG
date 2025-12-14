#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8884236967656966268LL;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-29683;
signed char var_15 = (signed char)-113;
int zero = 0;
signed char var_16 = (signed char)125;
unsigned short var_17 = (unsigned short)26859;
long long int var_18 = -2821913318514587705LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
