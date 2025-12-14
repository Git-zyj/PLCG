#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 995937558616019424LL;
unsigned short var_4 = (unsigned short)58134;
unsigned char var_9 = (unsigned char)136;
int zero = 0;
unsigned long long int var_17 = 11421747708639453660ULL;
unsigned char var_18 = (unsigned char)7;
unsigned long long int var_19 = 4894825133649546865ULL;
void init() {
}

void checksum() {
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
