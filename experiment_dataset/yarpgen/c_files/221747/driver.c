#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)126;
unsigned long long int var_1 = 6278740424881446593ULL;
signed char var_3 = (signed char)-6;
unsigned long long int var_5 = 3923635058617198701ULL;
unsigned char var_6 = (unsigned char)190;
long long int var_9 = -2178646405829383762LL;
unsigned char var_10 = (unsigned char)219;
signed char var_11 = (signed char)56;
unsigned short var_13 = (unsigned short)20282;
unsigned char var_14 = (unsigned char)201;
int zero = 0;
long long int var_17 = 7675800702070009471LL;
long long int var_18 = 2981534481601718700LL;
long long int var_19 = -5012534405047424507LL;
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
