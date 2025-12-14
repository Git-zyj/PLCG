#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6640839408648002219LL;
unsigned char var_4 = (unsigned char)189;
unsigned long long int var_5 = 790815739989301648ULL;
long long int var_7 = -7317480900305976348LL;
long long int var_8 = 5338717463300767724LL;
unsigned long long int var_10 = 9404522563646084221ULL;
unsigned char var_11 = (unsigned char)150;
unsigned short var_13 = (unsigned short)49590;
int zero = 0;
int var_14 = -45106207;
unsigned char var_15 = (unsigned char)104;
unsigned char var_16 = (unsigned char)4;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
