#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5986217745037632930ULL;
unsigned long long int var_2 = 3581073678299827905ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 7617468204390970789ULL;
short var_6 = (short)25390;
signed char var_7 = (signed char)-76;
unsigned long long int var_8 = 11721050031986800152ULL;
unsigned long long int var_9 = 16325806905580995205ULL;
unsigned char var_10 = (unsigned char)202;
int zero = 0;
unsigned int var_11 = 4164554263U;
signed char var_12 = (signed char)45;
signed char var_13 = (signed char)86;
unsigned long long int var_14 = 12846537353936290691ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
