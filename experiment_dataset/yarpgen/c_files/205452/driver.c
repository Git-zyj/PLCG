#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9457;
long long int var_2 = 8546885438055194676LL;
signed char var_6 = (signed char)-75;
signed char var_8 = (signed char)43;
unsigned char var_11 = (unsigned char)176;
int zero = 0;
unsigned short var_19 = (unsigned short)53276;
unsigned short var_20 = (unsigned short)18290;
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
