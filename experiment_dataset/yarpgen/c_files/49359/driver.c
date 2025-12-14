#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5266;
int var_2 = -2012758301;
long long int var_6 = -5366310615360960273LL;
unsigned int var_7 = 4054335376U;
unsigned char var_8 = (unsigned char)132;
unsigned char var_9 = (unsigned char)61;
_Bool var_10 = (_Bool)0;
long long int var_12 = -5962378663401741935LL;
long long int var_13 = 1698534508665315420LL;
int zero = 0;
long long int var_16 = -5205542490528874860LL;
int var_17 = 1021689612;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
