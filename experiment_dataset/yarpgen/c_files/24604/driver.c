#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27413;
unsigned long long int var_6 = 10366009870654703029ULL;
unsigned long long int var_8 = 10235306121706044189ULL;
unsigned long long int var_9 = 8811667754852548914ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)63671;
unsigned short var_14 = (unsigned short)38686;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
