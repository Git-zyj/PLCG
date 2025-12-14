#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)590;
long long int var_4 = -3610681436657574216LL;
long long int var_5 = 2380316262458345632LL;
unsigned short var_8 = (unsigned short)40313;
int zero = 0;
unsigned char var_10 = (unsigned char)125;
unsigned long long int var_11 = 12785553037040029357ULL;
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
