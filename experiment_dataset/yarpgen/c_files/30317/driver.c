#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3476200215U;
unsigned char var_4 = (unsigned char)121;
unsigned int var_7 = 3273466301U;
unsigned char var_9 = (unsigned char)185;
int var_10 = -131999110;
unsigned char var_13 = (unsigned char)136;
unsigned long long int var_14 = 4004499635204424996ULL;
unsigned long long int var_15 = 5871370142531450444ULL;
unsigned int var_18 = 3880656072U;
int zero = 0;
unsigned int var_19 = 2217325113U;
int var_20 = -1017615211;
unsigned short var_21 = (unsigned short)50135;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
