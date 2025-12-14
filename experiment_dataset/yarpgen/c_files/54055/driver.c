#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-41;
long long int var_2 = 2788091598975289394LL;
int var_8 = -1891436434;
unsigned long long int var_9 = 15131197909864761112ULL;
unsigned short var_10 = (unsigned short)2609;
long long int var_11 = -8362429819793121945LL;
unsigned int var_12 = 3162107505U;
int zero = 0;
unsigned char var_13 = (unsigned char)155;
unsigned short var_14 = (unsigned short)3071;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
