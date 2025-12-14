#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-44;
signed char var_2 = (signed char)-112;
int var_3 = 1954039244;
unsigned int var_4 = 2445456238U;
int var_7 = 834715319;
unsigned int var_8 = 2145628823U;
unsigned int var_11 = 1095112010U;
int var_12 = 1258556163;
int zero = 0;
unsigned int var_14 = 2209947590U;
unsigned int var_15 = 1156904687U;
unsigned int var_16 = 200411181U;
int var_17 = 139282337;
signed char var_18 = (signed char)-20;
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
