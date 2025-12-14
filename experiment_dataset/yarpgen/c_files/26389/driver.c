#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-111;
unsigned char var_3 = (unsigned char)242;
unsigned int var_6 = 1159074390U;
int var_8 = 964008576;
long long int var_9 = 1711375770557163736LL;
short var_11 = (short)-8141;
_Bool var_13 = (_Bool)0;
signed char var_15 = (signed char)-73;
int zero = 0;
unsigned long long int var_17 = 1423770170082337346ULL;
signed char var_18 = (signed char)69;
signed char var_19 = (signed char)-26;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
