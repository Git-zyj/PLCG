#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61118;
int var_2 = 573497662;
unsigned char var_3 = (unsigned char)207;
short var_9 = (short)-11220;
long long int var_10 = 2023252824337182945LL;
int zero = 0;
unsigned short var_13 = (unsigned short)22569;
unsigned int var_14 = 571081516U;
long long int var_15 = -8878259788567240186LL;
int var_16 = -852274513;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
