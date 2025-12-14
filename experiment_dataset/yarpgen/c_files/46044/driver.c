#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15130939607765188968ULL;
int var_2 = 959181165;
unsigned short var_3 = (unsigned short)21968;
short var_4 = (short)14855;
unsigned long long int var_5 = 4151221971719144802ULL;
unsigned char var_6 = (unsigned char)110;
signed char var_7 = (signed char)27;
unsigned char var_8 = (unsigned char)108;
unsigned char var_9 = (unsigned char)191;
int zero = 0;
signed char var_10 = (signed char)7;
short var_11 = (short)16182;
unsigned short var_12 = (unsigned short)48694;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
