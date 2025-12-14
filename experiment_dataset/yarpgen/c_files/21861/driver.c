#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)223;
int var_2 = 442665667;
unsigned long long int var_3 = 16594954758001928253ULL;
unsigned long long int var_5 = 8544895694697664347ULL;
signed char var_6 = (signed char)29;
int zero = 0;
short var_12 = (short)-25125;
signed char var_13 = (signed char)-110;
unsigned long long int var_14 = 18366670225664233489ULL;
unsigned long long int var_15 = 5212124067314874913ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
