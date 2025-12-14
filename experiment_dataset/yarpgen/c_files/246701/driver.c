#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)34715;
int var_3 = -1450431426;
unsigned long long int var_8 = 3742106956907623979ULL;
unsigned short var_9 = (unsigned short)29243;
int zero = 0;
unsigned long long int var_10 = 6465817644445710040ULL;
unsigned short var_11 = (unsigned short)60309;
unsigned long long int var_12 = 12042075284213821469ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
