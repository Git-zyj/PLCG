#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1360401131714177099ULL;
unsigned long long int var_4 = 2402779417987265764ULL;
unsigned long long int var_5 = 7744340267057219011ULL;
signed char var_6 = (signed char)-55;
unsigned long long int var_7 = 15963807592227579133ULL;
signed char var_9 = (signed char)109;
signed char var_11 = (signed char)-23;
unsigned long long int var_13 = 8612168897688189242ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)22701;
unsigned short var_15 = (unsigned short)10225;
signed char var_16 = (signed char)-100;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
