#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14426865341955056571ULL;
unsigned long long int var_9 = 3754775086456773625ULL;
unsigned short var_11 = (unsigned short)63610;
unsigned short var_13 = (unsigned short)10876;
int zero = 0;
unsigned long long int var_17 = 852211330812742389ULL;
int var_18 = 446123089;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
