#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1030886056;
unsigned long long int var_9 = 17184808608858880690ULL;
int var_11 = 1462143722;
unsigned long long int var_13 = 10828303047155758279ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)209;
short var_20 = (short)-5635;
int var_21 = -748849169;
short var_22 = (short)-28703;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
