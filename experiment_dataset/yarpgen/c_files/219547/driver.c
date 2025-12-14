#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2614;
unsigned char var_1 = (unsigned char)155;
unsigned char var_2 = (unsigned char)187;
int var_3 = -320680683;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 2688317499444794622ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 14148747430814113175ULL;
long long int var_10 = 8081796281038977358LL;
unsigned char var_11 = (unsigned char)25;
unsigned short var_14 = (unsigned short)33591;
int zero = 0;
unsigned short var_17 = (unsigned short)41972;
unsigned long long int var_18 = 923186460149309551ULL;
unsigned short var_19 = (unsigned short)19979;
_Bool var_20 = (_Bool)1;
int var_21 = -2005970881;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
