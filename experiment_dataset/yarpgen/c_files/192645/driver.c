#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -1629325497;
long long int var_2 = -8691730650798778263LL;
unsigned short var_3 = (unsigned short)64152;
unsigned short var_4 = (unsigned short)38501;
unsigned short var_5 = (unsigned short)40380;
short var_6 = (short)752;
int var_8 = 1096328725;
unsigned long long int var_9 = 1233394693989565269ULL;
short var_10 = (short)-15517;
signed char var_11 = (signed char)89;
unsigned char var_12 = (unsigned char)212;
long long int var_13 = 8395882719566933066LL;
long long int var_14 = 5171643367355124208LL;
unsigned int var_15 = 726362400U;
int zero = 0;
long long int var_16 = 3887180739648220LL;
short var_17 = (short)-8640;
short var_18 = (short)27898;
long long int var_19 = 6730921987234788569LL;
unsigned long long int var_20 = 12865405235255094900ULL;
short var_21 = (short)30020;
int var_22 = -411619892;
unsigned int var_23 = 1312990465U;
short var_24 = (short)657;
unsigned char var_25 = (unsigned char)56;
signed char var_26 = (signed char)-51;
unsigned short var_27 = (unsigned short)10297;
_Bool var_28 = (_Bool)0;
unsigned char var_29 = (unsigned char)41;
_Bool var_30 = (_Bool)0;
unsigned int var_31 = 3444617412U;
short var_32 = (short)-23791;
signed char var_33 = (signed char)-103;
unsigned short var_34 = (unsigned short)10906;
short var_35 = (short)15648;
long long int var_36 = -5917235198120020633LL;
signed char var_37 = (signed char)-82;
unsigned char var_38 = (unsigned char)137;
unsigned int var_39 = 892282043U;
int var_40 = -1986048559;
int var_41 = -1598527557;
_Bool var_42 = (_Bool)0;
unsigned short var_43 = (unsigned short)29070;
signed char var_44 = (signed char)-90;
short var_45 = (short)6462;
long long int var_46 = -2804881638767715937LL;
unsigned long long int var_47 = 15032639819758705443ULL;
unsigned short var_48 = (unsigned short)53732;
long long int var_49 = 4651459977314420247LL;
int var_50 = -1720801464;
int var_51 = -2098047075;
signed char var_52 = (signed char)80;
long long int var_53 = -1044980313631826591LL;
unsigned long long int var_54 = 1216038753591654934ULL;
unsigned long long int var_55 = 4989052766331182169ULL;
unsigned int var_56 = 4198101837U;
long long int var_57 = -6128980071492270078LL;
short var_58 = (short)-20626;
signed char var_59 = (signed char)29;
unsigned char var_60 = (unsigned char)152;
unsigned char var_61 = (unsigned char)31;
unsigned int var_62 = 1366208937U;
unsigned short var_63 = (unsigned short)34041;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
