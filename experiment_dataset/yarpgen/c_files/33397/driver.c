#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15545156440759681145ULL;
unsigned char var_2 = (unsigned char)167;
unsigned int var_5 = 347277777U;
unsigned short var_6 = (unsigned short)34689;
unsigned long long int var_8 = 18182406720096009695ULL;
_Bool var_9 = (_Bool)0;
unsigned short var_13 = (unsigned short)64851;
int zero = 0;
long long int var_15 = 3059534807028294265LL;
unsigned long long int var_16 = 18206050840137059333ULL;
unsigned short var_17 = (unsigned short)50722;
short var_18 = (short)-5582;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
