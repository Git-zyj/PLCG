#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-124;
unsigned char var_8 = (unsigned char)228;
long long int var_10 = 5857222417097059372LL;
unsigned int var_11 = 2706297183U;
unsigned int var_12 = 1187413033U;
long long int var_14 = 6025992525678310727LL;
int zero = 0;
unsigned char var_17 = (unsigned char)176;
signed char var_18 = (signed char)-114;
long long int var_19 = 6853646954051529654LL;
long long int var_20 = -1884076781524203603LL;
unsigned short var_21 = (unsigned short)43776;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
