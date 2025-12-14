#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -6686755922106351233LL;
int var_2 = -1742394185;
unsigned long long int var_4 = 2378913450099423834ULL;
short var_8 = (short)-9696;
long long int var_9 = 4243530109307808817LL;
long long int var_11 = 5496973728233020669LL;
unsigned short var_12 = (unsigned short)47630;
int zero = 0;
short var_13 = (short)-28766;
unsigned char var_14 = (unsigned char)137;
void init() {
}

void checksum() {
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
