#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)56;
long long int var_6 = -2602876314908246150LL;
unsigned char var_14 = (unsigned char)228;
unsigned int var_15 = 449856628U;
short var_16 = (short)-32717;
int zero = 0;
unsigned char var_19 = (unsigned char)185;
int var_20 = -1225713639;
unsigned long long int var_21 = 7508054069881647108ULL;
long long int var_22 = -2099597259573939172LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
