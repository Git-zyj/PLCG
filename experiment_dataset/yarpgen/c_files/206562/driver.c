#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)856;
long long int var_4 = 2813794494926398912LL;
unsigned short var_7 = (unsigned short)50763;
unsigned char var_10 = (unsigned char)132;
unsigned short var_11 = (unsigned short)13709;
unsigned char var_15 = (unsigned char)109;
long long int var_19 = 702421179509437838LL;
int zero = 0;
signed char var_20 = (signed char)-64;
unsigned long long int var_21 = 9862462234981944051ULL;
unsigned short var_22 = (unsigned short)51934;
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
