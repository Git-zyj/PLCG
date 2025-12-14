#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5547;
long long int var_1 = 4866994354170789704LL;
long long int var_2 = 8243545587549135601LL;
long long int var_5 = -2404740943168453320LL;
unsigned long long int var_10 = 18125831133645215175ULL;
long long int var_13 = 6893158923696056062LL;
int zero = 0;
long long int var_20 = 5729968015825320316LL;
long long int var_21 = 6184940748575646230LL;
void init() {
}

void checksum() {
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
