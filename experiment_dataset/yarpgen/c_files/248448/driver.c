#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-11;
signed char var_5 = (signed char)-8;
long long int var_6 = 3512189369903586390LL;
unsigned short var_7 = (unsigned short)55845;
unsigned long long int var_8 = 5549670876501446600ULL;
unsigned short var_9 = (unsigned short)38371;
int zero = 0;
unsigned short var_14 = (unsigned short)44501;
long long int var_15 = -7115418555400728046LL;
unsigned char var_16 = (unsigned char)83;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
