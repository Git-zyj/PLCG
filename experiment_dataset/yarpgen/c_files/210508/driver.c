#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17102410837602755222ULL;
unsigned char var_2 = (unsigned char)12;
unsigned long long int var_4 = 8911735420709264004ULL;
unsigned short var_5 = (unsigned short)41606;
int var_6 = -56116039;
short var_9 = (short)-222;
short var_17 = (short)27885;
int zero = 0;
unsigned char var_18 = (unsigned char)50;
int var_19 = -1942046489;
short var_20 = (short)30434;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
