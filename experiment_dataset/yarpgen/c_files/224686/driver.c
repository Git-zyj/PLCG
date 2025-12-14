#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46204;
int var_2 = 251610625;
signed char var_4 = (signed char)-17;
signed char var_6 = (signed char)120;
unsigned long long int var_7 = 7445888868419980558ULL;
unsigned short var_8 = (unsigned short)10136;
short var_9 = (short)-12062;
int zero = 0;
unsigned long long int var_10 = 7483669253698860300ULL;
unsigned char var_11 = (unsigned char)170;
short var_12 = (short)-25951;
unsigned long long int var_13 = 13231582363592553591ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
