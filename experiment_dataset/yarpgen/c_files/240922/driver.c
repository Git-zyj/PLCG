#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -191928905466266364LL;
unsigned short var_6 = (unsigned short)37375;
unsigned char var_7 = (unsigned char)215;
unsigned int var_9 = 1969689229U;
_Bool var_11 = (_Bool)0;
int var_17 = -1475505937;
unsigned short var_18 = (unsigned short)52800;
int zero = 0;
signed char var_19 = (signed char)3;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)43547;
void init() {
}

void checksum() {
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
