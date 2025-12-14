#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62477;
unsigned short var_2 = (unsigned short)40247;
short var_4 = (short)-25559;
signed char var_5 = (signed char)68;
short var_7 = (short)-11457;
signed char var_8 = (signed char)111;
unsigned short var_9 = (unsigned short)14309;
signed char var_10 = (signed char)120;
int zero = 0;
unsigned short var_11 = (unsigned short)50700;
signed char var_12 = (signed char)-37;
signed char var_13 = (signed char)67;
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
