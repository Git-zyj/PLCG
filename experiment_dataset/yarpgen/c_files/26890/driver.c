#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17018;
unsigned int var_2 = 3087321124U;
signed char var_3 = (signed char)-73;
int var_4 = -1019603995;
int var_6 = 1495373034;
unsigned long long int var_8 = 8525254673667217022ULL;
long long int var_9 = -2423418240050939144LL;
unsigned char var_10 = (unsigned char)145;
int var_11 = -819817187;
unsigned long long int var_14 = 363621147128801745ULL;
signed char var_15 = (signed char)-72;
unsigned long long int var_16 = 14386703684371484597ULL;
signed char var_17 = (signed char)-46;
int zero = 0;
unsigned long long int var_18 = 5693506275410211758ULL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 5199559747061949270ULL;
unsigned short var_21 = (unsigned short)51183;
long long int var_22 = -4546491454440265502LL;
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
