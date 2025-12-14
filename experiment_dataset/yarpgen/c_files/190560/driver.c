#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4406035491600070273LL;
unsigned short var_2 = (unsigned short)50276;
signed char var_8 = (signed char)61;
int var_9 = 325113597;
signed char var_10 = (signed char)-75;
long long int var_11 = 7950116107549676925LL;
signed char var_13 = (signed char)68;
unsigned char var_14 = (unsigned char)21;
int zero = 0;
short var_17 = (short)16980;
signed char var_18 = (signed char)-72;
unsigned char var_19 = (unsigned char)94;
unsigned char var_20 = (unsigned char)46;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
