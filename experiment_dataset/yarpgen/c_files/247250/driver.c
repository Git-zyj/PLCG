#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)69;
int var_4 = -114487888;
unsigned char var_6 = (unsigned char)219;
unsigned char var_9 = (unsigned char)109;
signed char var_14 = (signed char)-18;
int zero = 0;
unsigned long long int var_16 = 4332594423422702035ULL;
unsigned long long int var_17 = 1575167272156640598ULL;
unsigned int var_18 = 522685414U;
unsigned long long int var_19 = 8863102194221369394ULL;
unsigned int var_20 = 3423476736U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
