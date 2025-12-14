#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)108;
signed char var_2 = (signed char)-44;
int var_3 = 202609062;
int var_4 = 2065954819;
unsigned char var_5 = (unsigned char)225;
unsigned long long int var_6 = 10463068783458383227ULL;
unsigned int var_7 = 615219972U;
unsigned long long int var_8 = 5507488480712802258ULL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 18157213638078537918ULL;
int zero = 0;
unsigned int var_12 = 2488107107U;
unsigned char var_13 = (unsigned char)75;
unsigned long long int var_14 = 5905515610961396465ULL;
unsigned long long int var_15 = 18412915166731087607ULL;
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
