#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7715507664747054647ULL;
unsigned char var_1 = (unsigned char)196;
unsigned long long int var_2 = 4596427204701943264ULL;
unsigned long long int var_3 = 8663169292478584292ULL;
unsigned short var_7 = (unsigned short)50048;
unsigned int var_8 = 184571084U;
int zero = 0;
int var_10 = -1955622873;
short var_11 = (short)-10933;
unsigned long long int var_12 = 7054745136795635694ULL;
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
