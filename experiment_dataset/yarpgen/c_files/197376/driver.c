#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3314580484U;
unsigned short var_6 = (unsigned short)22350;
long long int var_9 = -4826648394593222058LL;
unsigned short var_10 = (unsigned short)40994;
unsigned long long int var_17 = 15367826802594657151ULL;
int zero = 0;
unsigned long long int var_18 = 9478200185758258980ULL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
