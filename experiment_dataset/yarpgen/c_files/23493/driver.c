#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1103340897;
unsigned long long int var_2 = 8501965759532579492ULL;
unsigned long long int var_3 = 2296734153377013405ULL;
unsigned long long int var_5 = 1975519970851343386ULL;
unsigned long long int var_6 = 7167851465410656946ULL;
unsigned long long int var_9 = 10298058312322616805ULL;
int zero = 0;
int var_10 = -213685053;
signed char var_11 = (signed char)-118;
unsigned long long int var_12 = 13339673053441736618ULL;
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
