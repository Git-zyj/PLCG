#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6139;
unsigned long long int var_2 = 6748377253599052454ULL;
_Bool var_3 = (_Bool)1;
long long int var_5 = 1500048167270247665LL;
long long int var_6 = 8423770929562098808LL;
unsigned short var_7 = (unsigned short)34512;
long long int var_9 = -3563592279213406461LL;
unsigned long long int var_11 = 10597296742501535425ULL;
long long int var_13 = 6318782589629172419LL;
_Bool var_14 = (_Bool)1;
long long int var_15 = -4884889283950563231LL;
int zero = 0;
long long int var_16 = 3665287751554408068LL;
unsigned short var_17 = (unsigned short)331;
unsigned char var_18 = (unsigned char)99;
short var_19 = (short)-8663;
long long int var_20 = 781809264054112074LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
