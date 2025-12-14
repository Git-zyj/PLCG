#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-45;
unsigned char var_1 = (unsigned char)189;
unsigned short var_2 = (unsigned short)27517;
unsigned int var_3 = 3997089812U;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-37;
unsigned long long int var_7 = 12286390885771827058ULL;
unsigned long long int var_8 = 15479768946782215590ULL;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)23;
signed char var_11 = (signed char)-44;
unsigned int var_12 = 4118608212U;
signed char var_14 = (signed char)-67;
signed char var_15 = (signed char)-15;
_Bool var_16 = (_Bool)0;
int var_17 = -1433677366;
int zero = 0;
signed char var_18 = (signed char)-127;
unsigned short var_19 = (unsigned short)29258;
unsigned char var_20 = (unsigned char)129;
void init() {
}

void checksum() {
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
