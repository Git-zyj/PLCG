#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)60;
unsigned int var_1 = 1890999190U;
long long int var_3 = 5364392146298270180LL;
long long int var_4 = 104166354085712079LL;
signed char var_6 = (signed char)-30;
unsigned long long int var_11 = 10464623560851767604ULL;
int zero = 0;
unsigned long long int var_12 = 6288211172357751672ULL;
long long int var_13 = 3624675633869611097LL;
long long int var_14 = 515883694966069097LL;
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
