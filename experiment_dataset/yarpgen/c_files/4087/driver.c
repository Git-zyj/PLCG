#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7723;
short var_1 = (short)15228;
int var_2 = -355078878;
short var_4 = (short)-3715;
unsigned long long int var_6 = 5414415687561522029ULL;
short var_9 = (short)-21051;
int zero = 0;
unsigned char var_10 = (unsigned char)237;
unsigned long long int var_11 = 3657694180120290588ULL;
unsigned char var_12 = (unsigned char)13;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
