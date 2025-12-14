#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1573176553;
unsigned long long int var_3 = 8863964657968430056ULL;
long long int var_6 = 5839025638647391782LL;
signed char var_9 = (signed char)28;
unsigned long long int var_10 = 8060366066777345792ULL;
unsigned char var_16 = (unsigned char)50;
int zero = 0;
long long int var_20 = -1578350850397565643LL;
long long int var_21 = -8802838444351468110LL;
void init() {
}

void checksum() {
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
