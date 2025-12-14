#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11785529827074331725ULL;
short var_6 = (short)4562;
unsigned long long int var_9 = 860341950564409580ULL;
long long int var_13 = -4771183305467036818LL;
unsigned char var_15 = (unsigned char)165;
unsigned long long int var_16 = 7293849420058162084ULL;
unsigned short var_19 = (unsigned short)26401;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-43;
unsigned long long int var_22 = 519552503345928905ULL;
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
