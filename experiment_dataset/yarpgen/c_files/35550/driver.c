#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1119304135250448581ULL;
unsigned long long int var_1 = 10672025618882622385ULL;
unsigned int var_2 = 771909714U;
signed char var_3 = (signed char)-50;
int var_4 = -1490142186;
unsigned long long int var_6 = 4158346846903981418ULL;
unsigned long long int var_8 = 16532288520449146471ULL;
unsigned char var_10 = (unsigned char)42;
unsigned long long int var_14 = 15186484229393767539ULL;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_18 = -1242543491;
unsigned int var_19 = 3103730144U;
signed char var_20 = (signed char)-73;
unsigned long long int var_21 = 8442152018800376844ULL;
unsigned char var_22 = (unsigned char)177;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
