#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)64;
long long int var_8 = 3933517370008837789LL;
int var_10 = 1080164632;
unsigned char var_11 = (unsigned char)108;
int var_13 = 566120047;
unsigned short var_14 = (unsigned short)37400;
long long int var_18 = -2531440165303410018LL;
int zero = 0;
unsigned char var_19 = (unsigned char)136;
int var_20 = 656264131;
unsigned char var_21 = (unsigned char)61;
unsigned char var_22 = (unsigned char)162;
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
