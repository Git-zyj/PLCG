#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)7689;
int zero = 0;
long long int var_14 = 7821994508394421486LL;
unsigned char var_15 = (unsigned char)49;
long long int var_16 = 5839900343862730762LL;
unsigned int var_17 = 2819240278U;
short var_18 = (short)7653;
long long int var_19 = 1914426039308937586LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
