#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16722;
unsigned short var_1 = (unsigned short)19666;
signed char var_4 = (signed char)-106;
unsigned long long int var_5 = 10157270700224174720ULL;
unsigned long long int var_7 = 5709100229120935724ULL;
unsigned long long int var_9 = 6245342875853687626ULL;
int var_10 = 438201587;
unsigned int var_14 = 3430732117U;
unsigned long long int var_15 = 6444180754054819580ULL;
unsigned int var_16 = 2594218986U;
_Bool var_18 = (_Bool)1;
int zero = 0;
long long int var_19 = 4750613831540032141LL;
unsigned long long int var_20 = 16658934927254568405ULL;
unsigned int var_21 = 3268777269U;
short var_22 = (short)14280;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
