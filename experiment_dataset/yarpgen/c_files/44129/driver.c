#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4572623724992232566ULL;
long long int var_9 = -1460493842034533698LL;
long long int var_13 = -6047139573142056890LL;
unsigned char var_14 = (unsigned char)146;
int zero = 0;
int var_16 = -897013176;
int var_17 = -234003017;
unsigned long long int var_18 = 18317822987404756284ULL;
long long int var_19 = 7452560029321259831LL;
void init() {
}

void checksum() {
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
