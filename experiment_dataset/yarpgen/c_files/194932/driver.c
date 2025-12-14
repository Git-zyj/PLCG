#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26946;
unsigned char var_5 = (unsigned char)121;
unsigned long long int var_6 = 13992267551249919835ULL;
short var_7 = (short)26749;
unsigned char var_8 = (unsigned char)21;
signed char var_11 = (signed char)-29;
signed char var_13 = (signed char)-23;
int zero = 0;
unsigned long long int var_17 = 3543864917394367923ULL;
short var_18 = (short)-3411;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
