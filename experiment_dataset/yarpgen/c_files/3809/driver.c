#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)121;
long long int var_1 = -3516141452484553244LL;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)194;
signed char var_10 = (signed char)-59;
unsigned char var_11 = (unsigned char)146;
int zero = 0;
int var_12 = -1699376332;
long long int var_13 = -6495263839550484279LL;
unsigned short var_14 = (unsigned short)43183;
unsigned char var_15 = (unsigned char)11;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
