#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10432;
signed char var_1 = (signed char)-15;
short var_2 = (short)-5746;
unsigned char var_3 = (unsigned char)149;
long long int var_4 = 5017359132441228244LL;
unsigned char var_5 = (unsigned char)25;
signed char var_6 = (signed char)-29;
unsigned char var_7 = (unsigned char)169;
unsigned int var_8 = 2587585838U;
long long int var_9 = -1859103129184402083LL;
unsigned long long int var_11 = 8970590962498618526ULL;
unsigned int var_12 = 867809607U;
int zero = 0;
short var_13 = (short)-27365;
short var_14 = (short)20160;
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
