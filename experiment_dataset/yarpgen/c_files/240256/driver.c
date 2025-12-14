#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-23595;
unsigned long long int var_4 = 6970828034724400710ULL;
short var_9 = (short)21866;
long long int var_10 = 7457823044841407970LL;
unsigned char var_12 = (unsigned char)4;
_Bool var_14 = (_Bool)0;
int var_19 = -1346729524;
int zero = 0;
unsigned char var_20 = (unsigned char)121;
long long int var_21 = 2746891800418056587LL;
unsigned short var_22 = (unsigned short)58706;
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
