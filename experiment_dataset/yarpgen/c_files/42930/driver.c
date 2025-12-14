#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9165554531244037530LL;
long long int var_1 = 3212080230050776031LL;
long long int var_4 = -3707461860844113219LL;
short var_6 = (short)295;
short var_7 = (short)22609;
signed char var_8 = (signed char)-28;
_Bool var_9 = (_Bool)0;
long long int var_10 = 6730558395506747496LL;
unsigned int var_11 = 3346977031U;
int var_12 = -11128376;
unsigned char var_13 = (unsigned char)204;
int zero = 0;
long long int var_15 = -1975114772728236422LL;
long long int var_16 = 7049280325093236908LL;
long long int var_17 = 7936543738141190614LL;
unsigned short var_18 = (unsigned short)15224;
signed char var_19 = (signed char)-29;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
