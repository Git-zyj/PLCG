#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-85;
unsigned short var_3 = (unsigned short)50905;
unsigned long long int var_5 = 1307935250085889922ULL;
unsigned long long int var_6 = 4938053911958329808ULL;
unsigned long long int var_9 = 9729668996801267044ULL;
int var_10 = 1563705718;
int zero = 0;
unsigned char var_11 = (unsigned char)23;
int var_12 = 1724634781;
unsigned char var_13 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
