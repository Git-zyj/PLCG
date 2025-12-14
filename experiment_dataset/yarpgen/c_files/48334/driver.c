#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-85;
unsigned char var_1 = (unsigned char)219;
short var_3 = (short)22660;
unsigned char var_4 = (unsigned char)21;
signed char var_7 = (signed char)-6;
unsigned short var_9 = (unsigned short)25108;
int zero = 0;
long long int var_10 = 6859362487977399415LL;
long long int var_11 = -3017526594828154002LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
