#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)217;
unsigned short var_3 = (unsigned short)55187;
unsigned short var_4 = (unsigned short)59895;
unsigned char var_7 = (unsigned char)82;
unsigned short var_8 = (unsigned short)52963;
unsigned char var_11 = (unsigned char)237;
unsigned char var_12 = (unsigned char)81;
int var_15 = -1764893922;
unsigned short var_16 = (unsigned short)19436;
unsigned short var_17 = (unsigned short)50990;
int zero = 0;
unsigned short var_18 = (unsigned short)12847;
unsigned char var_19 = (unsigned char)5;
unsigned short var_20 = (unsigned short)53726;
unsigned short var_21 = (unsigned short)25376;
unsigned char var_22 = (unsigned char)251;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
