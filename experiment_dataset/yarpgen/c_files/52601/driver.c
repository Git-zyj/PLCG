#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1105734476;
unsigned long long int var_1 = 3612064642318840721ULL;
unsigned long long int var_2 = 11476110866629932140ULL;
long long int var_5 = 1256907018844832391LL;
short var_7 = (short)-10647;
short var_8 = (short)13818;
int zero = 0;
unsigned long long int var_11 = 15378195081238981834ULL;
unsigned int var_12 = 3740493060U;
unsigned char var_13 = (unsigned char)60;
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
