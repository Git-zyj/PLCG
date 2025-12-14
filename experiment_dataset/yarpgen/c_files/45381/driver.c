#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6675316490712247428LL;
unsigned int var_3 = 2167765788U;
unsigned short var_6 = (unsigned short)4083;
unsigned short var_8 = (unsigned short)2724;
short var_9 = (short)-2886;
int zero = 0;
unsigned int var_10 = 2167586661U;
unsigned int var_11 = 3508281999U;
int var_12 = 723762426;
long long int var_13 = 8959674027180878359LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
