#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 7735888510870874228ULL;
unsigned long long int var_9 = 4551665463280673412ULL;
unsigned long long int var_11 = 15945984989400644951ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)216;
unsigned short var_16 = (unsigned short)35813;
void init() {
}

void checksum() {
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
