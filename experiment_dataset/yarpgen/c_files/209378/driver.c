#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)167;
unsigned long long int var_1 = 17247591278289822396ULL;
unsigned long long int var_2 = 14881653528084835097ULL;
long long int var_5 = 2070647334420998700LL;
unsigned short var_6 = (unsigned short)43679;
long long int var_8 = -5600511071885391238LL;
int zero = 0;
short var_11 = (short)-10054;
unsigned long long int var_12 = 4467080365271346643ULL;
long long int var_13 = 4603831931678129919LL;
void init() {
}

void checksum() {
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
