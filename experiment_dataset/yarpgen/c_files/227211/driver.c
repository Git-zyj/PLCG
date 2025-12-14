#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)70;
long long int var_7 = 7763908565711658535LL;
unsigned char var_9 = (unsigned char)67;
int zero = 0;
unsigned char var_19 = (unsigned char)43;
signed char var_20 = (signed char)-38;
long long int var_21 = 5390068875623777784LL;
unsigned char var_22 = (unsigned char)26;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
