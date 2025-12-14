#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 937851919;
short var_13 = (short)-20835;
int var_16 = -1215458053;
int zero = 0;
int var_19 = -532623566;
int var_20 = -431231879;
int var_21 = -1085322738;
unsigned int var_22 = 3295646481U;
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
