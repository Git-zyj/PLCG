#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21168;
short var_4 = (short)7241;
unsigned char var_5 = (unsigned char)46;
unsigned int var_6 = 972426492U;
short var_7 = (short)-25834;
unsigned int var_9 = 783564248U;
int var_12 = 717713145;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 8501299239422727359ULL;
unsigned long long int var_16 = 7649732273447672842ULL;
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
