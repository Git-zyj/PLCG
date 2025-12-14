#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)57745;
int var_8 = -1624937165;
_Bool var_9 = (_Bool)1;
long long int var_13 = -1943063892822316589LL;
signed char var_16 = (signed char)-50;
int zero = 0;
signed char var_19 = (signed char)0;
unsigned short var_20 = (unsigned short)22423;
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
