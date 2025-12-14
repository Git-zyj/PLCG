#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4688966127381516650LL;
long long int var_3 = 3631897875688802831LL;
unsigned int var_5 = 2688075123U;
short var_6 = (short)18456;
unsigned int var_7 = 504772072U;
short var_8 = (short)24118;
unsigned long long int var_9 = 7422934445076417131ULL;
int var_10 = -548686963;
unsigned char var_12 = (unsigned char)106;
int zero = 0;
short var_13 = (short)-3373;
unsigned char var_14 = (unsigned char)208;
short var_15 = (short)-30619;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
