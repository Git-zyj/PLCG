#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-47;
unsigned short var_4 = (unsigned short)35150;
short var_5 = (short)32550;
unsigned long long int var_6 = 11051017970373140212ULL;
unsigned char var_8 = (unsigned char)167;
int zero = 0;
signed char var_13 = (signed char)-35;
unsigned short var_14 = (unsigned short)10287;
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
