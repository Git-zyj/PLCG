#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-6;
signed char var_2 = (signed char)96;
short var_7 = (short)8383;
long long int var_8 = -417325753634287938LL;
unsigned int var_9 = 3019254359U;
int zero = 0;
long long int var_10 = 1869845209651999289LL;
short var_11 = (short)15505;
int var_12 = -1043894789;
unsigned int var_13 = 1656091736U;
int var_14 = -1071403573;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
