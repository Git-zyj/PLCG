#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)106;
unsigned long long int var_4 = 9971989130082795667ULL;
unsigned int var_5 = 283359800U;
unsigned char var_7 = (unsigned char)68;
unsigned int var_9 = 1677249101U;
int var_10 = -119909932;
int var_13 = -991794428;
int var_14 = -1747259853;
int zero = 0;
unsigned int var_19 = 509955928U;
signed char var_20 = (signed char)-55;
int var_21 = -1599442484;
int var_22 = 1031233487;
int var_23 = -1379858803;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
