#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1752691352698109684LL;
unsigned long long int var_1 = 9388088046527676427ULL;
unsigned short var_2 = (unsigned short)25686;
unsigned int var_4 = 3303624408U;
unsigned long long int var_6 = 14483401566374684750ULL;
unsigned short var_10 = (unsigned short)3630;
int zero = 0;
unsigned char var_11 = (unsigned char)170;
unsigned short var_12 = (unsigned short)9087;
unsigned int var_13 = 1232044591U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
