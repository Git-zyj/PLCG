#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1444982903125687175LL;
signed char var_3 = (signed char)-35;
unsigned char var_4 = (unsigned char)176;
unsigned short var_5 = (unsigned short)21377;
unsigned int var_7 = 1307944167U;
unsigned int var_9 = 4015137265U;
unsigned char var_12 = (unsigned char)254;
unsigned short var_14 = (unsigned short)12084;
unsigned int var_17 = 164370136U;
int zero = 0;
signed char var_18 = (signed char)117;
long long int var_19 = -2327317292007630127LL;
unsigned int var_20 = 1059284949U;
unsigned int var_21 = 2585737403U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
