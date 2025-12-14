#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3140054273991722152ULL;
unsigned long long int var_3 = 16261038137189415029ULL;
short var_6 = (short)2914;
long long int var_7 = 1106495923345920655LL;
long long int var_9 = -6538835419557920328LL;
long long int var_10 = -4058958002720879242LL;
short var_12 = (short)4031;
long long int var_13 = -1183026272444490258LL;
int zero = 0;
long long int var_18 = 5362459970854129758LL;
int var_19 = -2086782801;
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
