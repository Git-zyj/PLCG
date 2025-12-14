#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)19323;
unsigned long long int var_6 = 13111897769353080366ULL;
unsigned char var_13 = (unsigned char)68;
unsigned short var_15 = (unsigned short)30960;
int zero = 0;
unsigned long long int var_19 = 2706013979495619112ULL;
long long int var_20 = 8528707317997388508LL;
unsigned short var_21 = (unsigned short)22683;
unsigned long long int var_22 = 18138808511599785042ULL;
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
