#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-90;
unsigned char var_5 = (unsigned char)200;
unsigned long long int var_6 = 697503882496011716ULL;
unsigned short var_7 = (unsigned short)14967;
unsigned char var_8 = (unsigned char)45;
unsigned long long int var_9 = 12971865183855951991ULL;
unsigned long long int var_10 = 2353587848035784288ULL;
int var_11 = 528040912;
int zero = 0;
unsigned char var_12 = (unsigned char)85;
short var_13 = (short)26099;
short var_14 = (short)-21860;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
