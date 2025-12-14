#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-97;
signed char var_1 = (signed char)-56;
unsigned short var_2 = (unsigned short)21273;
unsigned int var_13 = 3405695775U;
unsigned int var_14 = 3343408259U;
long long int var_19 = -1983208456053947304LL;
int zero = 0;
unsigned char var_20 = (unsigned char)177;
unsigned int var_21 = 2941761139U;
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
