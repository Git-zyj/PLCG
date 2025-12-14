#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)35;
unsigned long long int var_2 = 15475992221392532906ULL;
unsigned short var_3 = (unsigned short)41073;
unsigned char var_5 = (unsigned char)48;
long long int var_6 = 8467925091432101372LL;
long long int var_7 = 6223375411026223482LL;
unsigned long long int var_9 = 3422119522968085644ULL;
int zero = 0;
signed char var_11 = (signed char)-31;
unsigned short var_12 = (unsigned short)33555;
long long int var_13 = -155680581898028660LL;
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
