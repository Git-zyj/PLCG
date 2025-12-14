#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)17;
int var_4 = 1526873875;
unsigned long long int var_5 = 3495361008015779400ULL;
unsigned char var_7 = (unsigned char)115;
long long int var_10 = 6074834945370164034LL;
unsigned long long int var_13 = 10627949109831105268ULL;
signed char var_14 = (signed char)-17;
long long int var_15 = 6077004886902824155LL;
int zero = 0;
long long int var_18 = 4148928830898939241LL;
unsigned short var_19 = (unsigned short)21818;
unsigned long long int var_20 = 12577162721462745632ULL;
unsigned short var_21 = (unsigned short)47708;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
