#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)110;
signed char var_2 = (signed char)-77;
unsigned char var_3 = (unsigned char)22;
signed char var_4 = (signed char)28;
unsigned char var_5 = (unsigned char)90;
int var_6 = -351437161;
unsigned char var_7 = (unsigned char)249;
long long int var_8 = 215288694574303011LL;
int zero = 0;
long long int var_10 = 6270410510628200090LL;
long long int var_11 = 4872866062307685586LL;
unsigned char var_12 = (unsigned char)63;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
