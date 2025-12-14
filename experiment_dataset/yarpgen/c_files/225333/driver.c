#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-69;
unsigned int var_2 = 4161521980U;
unsigned long long int var_5 = 12903185024508186723ULL;
unsigned int var_6 = 416366781U;
unsigned short var_9 = (unsigned short)27888;
int zero = 0;
signed char var_17 = (signed char)-57;
unsigned long long int var_18 = 13985206803168877249ULL;
unsigned int var_19 = 1096834612U;
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
