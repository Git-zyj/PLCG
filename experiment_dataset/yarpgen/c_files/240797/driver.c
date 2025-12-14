#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-109;
unsigned short var_2 = (unsigned short)42741;
unsigned char var_3 = (unsigned char)242;
unsigned int var_5 = 3649144841U;
unsigned char var_7 = (unsigned char)105;
long long int var_8 = -1058030547528646466LL;
long long int var_16 = -2160751937688776505LL;
int var_17 = 1011394239;
int zero = 0;
long long int var_19 = -1219261482323133592LL;
long long int var_20 = 539092445074162965LL;
unsigned char var_21 = (unsigned char)121;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
