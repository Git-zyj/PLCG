#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
unsigned char var_2 = (unsigned char)249;
signed char var_6 = (signed char)-110;
unsigned short var_9 = (unsigned short)25379;
int zero = 0;
int var_10 = -532105564;
int var_11 = -1156256182;
short var_12 = (short)-4900;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
