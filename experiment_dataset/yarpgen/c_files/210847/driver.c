#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4046597513U;
short var_1 = (short)6784;
int var_2 = 816937666;
unsigned long long int var_6 = 14289811814129158040ULL;
int zero = 0;
unsigned long long int var_19 = 15920740209019892153ULL;
int var_20 = 1733399493;
long long int var_21 = -9057784850368697273LL;
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
