#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16499738522802847781ULL;
unsigned short var_4 = (unsigned short)22110;
_Bool var_5 = (_Bool)0;
int var_6 = -526548025;
short var_7 = (short)16444;
unsigned char var_10 = (unsigned char)45;
unsigned int var_11 = 197676551U;
unsigned short var_12 = (unsigned short)47241;
int zero = 0;
unsigned char var_14 = (unsigned char)45;
unsigned char var_15 = (unsigned char)77;
unsigned long long int var_16 = 5156542069823022240ULL;
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
