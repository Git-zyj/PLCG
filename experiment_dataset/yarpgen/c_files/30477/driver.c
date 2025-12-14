#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)17525;
long long int var_6 = 4800637540515378176LL;
short var_9 = (short)-27940;
short var_10 = (short)3992;
unsigned int var_11 = 451082129U;
unsigned int var_14 = 4218410643U;
long long int var_17 = -6039175097431525723LL;
unsigned int var_18 = 365230641U;
int zero = 0;
long long int var_20 = -7681867227236669154LL;
short var_21 = (short)-17957;
unsigned int var_22 = 558229742U;
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
