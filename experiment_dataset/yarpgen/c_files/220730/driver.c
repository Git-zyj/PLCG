#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6197304475028687418LL;
unsigned char var_2 = (unsigned char)195;
unsigned short var_3 = (unsigned short)26891;
unsigned char var_4 = (unsigned char)164;
int var_7 = 2080672244;
unsigned int var_8 = 268546817U;
int var_11 = 453605610;
unsigned short var_16 = (unsigned short)17574;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)43199;
long long int var_21 = 5687638886278139026LL;
void init() {
}

void checksum() {
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
