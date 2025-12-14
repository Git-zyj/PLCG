#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-30;
long long int var_2 = 2945598382511409966LL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 1703602436760066828ULL;
unsigned long long int var_6 = 13400549477253946510ULL;
unsigned long long int var_7 = 5615123815004477786ULL;
long long int var_9 = 5746276150178159266LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)-27321;
unsigned char var_12 = (unsigned char)10;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
