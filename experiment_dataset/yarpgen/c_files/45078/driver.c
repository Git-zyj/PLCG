#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3443585586U;
unsigned int var_1 = 2086979111U;
unsigned short var_2 = (unsigned short)44714;
signed char var_3 = (signed char)72;
unsigned int var_5 = 939568529U;
unsigned char var_6 = (unsigned char)135;
unsigned char var_7 = (unsigned char)177;
int var_8 = -1874923940;
int var_11 = -756856593;
int zero = 0;
signed char var_12 = (signed char)-107;
unsigned short var_13 = (unsigned short)14093;
void init() {
}

void checksum() {
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
