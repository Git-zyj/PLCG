#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-48;
long long int var_1 = 8350955605350757946LL;
short var_5 = (short)-25961;
short var_6 = (short)-3493;
signed char var_8 = (signed char)87;
short var_10 = (short)1232;
int zero = 0;
int var_12 = -850449216;
unsigned short var_13 = (unsigned short)4516;
void init() {
}

void checksum() {
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
