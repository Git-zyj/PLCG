#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)19;
long long int var_1 = -6191092653649124588LL;
int var_2 = -983980743;
short var_4 = (short)-25813;
long long int var_5 = -3529004630290823002LL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
short var_9 = (short)3166;
int var_10 = -1252197909;
unsigned int var_11 = 3909921578U;
int zero = 0;
unsigned short var_13 = (unsigned short)5407;
unsigned short var_14 = (unsigned short)15299;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
