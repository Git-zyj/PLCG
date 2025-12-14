#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1036886776;
long long int var_3 = -2960791774871596995LL;
unsigned char var_5 = (unsigned char)90;
unsigned long long int var_6 = 5150904821319358571ULL;
unsigned char var_7 = (unsigned char)202;
unsigned char var_8 = (unsigned char)116;
unsigned long long int var_9 = 5369490172562976759ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)107;
int var_12 = 1500611235;
unsigned char var_13 = (unsigned char)230;
int var_14 = 1048702546;
unsigned char var_15 = (unsigned char)152;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
