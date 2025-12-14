#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1661618818;
_Bool var_2 = (_Bool)0;
unsigned long long int var_6 = 6687720706531079732ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_20 = 411186020;
unsigned char var_21 = (unsigned char)12;
unsigned long long int var_22 = 17683974912249821838ULL;
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
