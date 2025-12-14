#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-105;
unsigned long long int var_3 = 8447623352327531115ULL;
short var_6 = (short)-15576;
unsigned long long int var_7 = 9099256374958488631ULL;
unsigned short var_10 = (unsigned short)26422;
unsigned long long int var_17 = 13834349391697704550ULL;
int zero = 0;
signed char var_20 = (signed char)31;
unsigned int var_21 = 353317122U;
signed char var_22 = (signed char)-45;
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
