#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49760;
unsigned long long int var_1 = 4747437408678360631ULL;
long long int var_2 = 6273015836687005019LL;
unsigned long long int var_3 = 6684368606403019389ULL;
unsigned char var_4 = (unsigned char)222;
unsigned int var_5 = 4161964667U;
unsigned long long int var_6 = 8276045855013907003ULL;
signed char var_7 = (signed char)-18;
unsigned long long int var_8 = 15445362886085501164ULL;
long long int var_9 = -9014763742259464115LL;
unsigned long long int var_10 = 13406969827172888828ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)222;
short var_12 = (short)-8027;
unsigned short var_13 = (unsigned short)15572;
unsigned char var_14 = (unsigned char)18;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
