#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1235544250;
long long int var_1 = 3165228991767861290LL;
signed char var_4 = (signed char)41;
unsigned short var_5 = (unsigned short)63825;
unsigned int var_6 = 2786679196U;
unsigned long long int var_8 = 10633687009274318105ULL;
int zero = 0;
unsigned long long int var_12 = 8140838167371247474ULL;
unsigned short var_13 = (unsigned short)45715;
void init() {
}

void checksum() {
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
