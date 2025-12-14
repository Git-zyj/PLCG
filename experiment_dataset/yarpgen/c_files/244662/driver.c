#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-105;
short var_1 = (short)31576;
unsigned char var_2 = (unsigned char)98;
signed char var_4 = (signed char)74;
signed char var_5 = (signed char)-12;
short var_9 = (short)-14501;
int var_11 = 960927401;
signed char var_14 = (signed char)-120;
short var_15 = (short)20313;
unsigned long long int var_17 = 317000217737613970ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)137;
long long int var_19 = 2089959358416991152LL;
void init() {
}

void checksum() {
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
