#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)123;
unsigned char var_3 = (unsigned char)118;
unsigned long long int var_4 = 8779223859166173951ULL;
unsigned long long int var_7 = 5523452786757788339ULL;
unsigned long long int var_8 = 15026611843617034287ULL;
long long int var_9 = 4265525494314603577LL;
unsigned long long int var_13 = 7511905666941867358ULL;
unsigned int var_14 = 3387208852U;
int zero = 0;
unsigned int var_20 = 1709951715U;
_Bool var_21 = (_Bool)0;
int var_22 = 1450096531;
unsigned char var_23 = (unsigned char)81;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
