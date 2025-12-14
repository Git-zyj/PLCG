#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)100;
unsigned long long int var_2 = 13496770799421308903ULL;
signed char var_3 = (signed char)-125;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 8955121694957307916ULL;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)-57;
signed char var_11 = (signed char)-120;
int var_17 = 853595095;
int zero = 0;
int var_20 = -622272431;
short var_21 = (short)18929;
short var_22 = (short)-17131;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
