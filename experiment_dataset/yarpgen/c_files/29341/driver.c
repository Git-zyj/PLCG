#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -741368149;
unsigned short var_1 = (unsigned short)62178;
unsigned int var_4 = 2434908051U;
unsigned long long int var_7 = 6768786221141742339ULL;
short var_8 = (short)27276;
int var_9 = -620060036;
unsigned int var_12 = 80699633U;
unsigned short var_13 = (unsigned short)64858;
int zero = 0;
unsigned long long int var_14 = 1946651066716754537ULL;
signed char var_15 = (signed char)-60;
unsigned long long int var_16 = 1053658964809012747ULL;
short var_17 = (short)22353;
int var_18 = 358889389;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
