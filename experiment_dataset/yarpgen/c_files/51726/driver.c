#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)66;
long long int var_9 = -6871320524567595230LL;
long long int var_11 = -8998327987957793965LL;
signed char var_13 = (signed char)-39;
unsigned char var_16 = (unsigned char)243;
int zero = 0;
int var_19 = -984435409;
unsigned char var_20 = (unsigned char)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
