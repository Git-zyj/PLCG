#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16328183164050608913ULL;
unsigned short var_2 = (unsigned short)43455;
unsigned long long int var_4 = 16665194767577159122ULL;
unsigned long long int var_7 = 4029062245555930884ULL;
short var_9 = (short)-15003;
int zero = 0;
unsigned short var_17 = (unsigned short)40995;
int var_18 = 818538637;
_Bool var_19 = (_Bool)1;
short var_20 = (short)21554;
unsigned char var_21 = (unsigned char)245;
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
