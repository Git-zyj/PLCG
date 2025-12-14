#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)187;
long long int var_3 = -7717669117439536478LL;
unsigned char var_4 = (unsigned char)28;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 10669546473899851280ULL;
long long int var_10 = -6317411005921049224LL;
unsigned long long int var_12 = 17626072570511688898ULL;
long long int var_13 = -2604063822027097164LL;
unsigned int var_15 = 1247381475U;
unsigned int var_16 = 420120238U;
int zero = 0;
unsigned long long int var_17 = 5246585255713339861ULL;
unsigned long long int var_18 = 625397234423233040ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
