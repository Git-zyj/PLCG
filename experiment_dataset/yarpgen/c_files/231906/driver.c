#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-121;
long long int var_7 = 5307794740531253259LL;
unsigned int var_16 = 1870933388U;
int var_18 = -1399453931;
int zero = 0;
signed char var_19 = (signed char)88;
unsigned short var_20 = (unsigned short)49219;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
