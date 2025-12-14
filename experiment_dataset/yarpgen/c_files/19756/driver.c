#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-17;
signed char var_1 = (signed char)-110;
unsigned char var_2 = (unsigned char)180;
unsigned char var_3 = (unsigned char)109;
unsigned long long int var_4 = 154735776518558630ULL;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
long long int var_8 = 6701064501071159043LL;
signed char var_9 = (signed char)42;
signed char var_11 = (signed char)18;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 9590612645861630213ULL;
unsigned char var_18 = (unsigned char)99;
int var_19 = -1329502065;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
