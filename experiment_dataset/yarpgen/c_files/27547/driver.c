#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24281;
long long int var_1 = -2156104673113768551LL;
unsigned long long int var_2 = 7842423892097210379ULL;
unsigned short var_3 = (unsigned short)42637;
_Bool var_6 = (_Bool)1;
unsigned long long int var_9 = 14092815185328624866ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)176;
long long int var_14 = -7340753952342672700LL;
void init() {
}

void checksum() {
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
