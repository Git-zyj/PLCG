#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16284;
unsigned long long int var_3 = 7369291705383708077ULL;
short var_8 = (short)-28508;
unsigned long long int var_9 = 17587314317674737020ULL;
unsigned char var_11 = (unsigned char)46;
unsigned long long int var_13 = 4877051975822951423ULL;
unsigned long long int var_16 = 10491738205383107721ULL;
short var_19 = (short)17299;
int zero = 0;
int var_20 = 1033445296;
unsigned short var_21 = (unsigned short)53216;
signed char var_22 = (signed char)-124;
void init() {
}

void checksum() {
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
