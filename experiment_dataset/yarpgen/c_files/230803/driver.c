#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8725143829024467393LL;
unsigned char var_5 = (unsigned char)33;
long long int var_8 = -1396125080923271252LL;
unsigned char var_9 = (unsigned char)182;
long long int var_11 = 2722167020618947562LL;
unsigned char var_13 = (unsigned char)229;
int zero = 0;
unsigned short var_14 = (unsigned short)45469;
long long int var_15 = -2168060603166815446LL;
unsigned long long int var_16 = 7004764392156014176ULL;
unsigned char var_17 = (unsigned char)70;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
