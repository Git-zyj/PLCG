#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3502499635045649019LL;
long long int var_6 = 2753273609046979548LL;
unsigned char var_8 = (unsigned char)81;
int var_14 = 578178352;
unsigned short var_17 = (unsigned short)53961;
unsigned int var_19 = 1523681578U;
int zero = 0;
signed char var_20 = (signed char)98;
unsigned char var_21 = (unsigned char)241;
void init() {
}

void checksum() {
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
