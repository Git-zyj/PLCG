#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)15;
unsigned short var_2 = (unsigned short)31931;
unsigned long long int var_5 = 9728550929529153340ULL;
unsigned long long int var_17 = 17982835528370960811ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)4946;
unsigned short var_19 = (unsigned short)19689;
void init() {
}

void checksum() {
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
