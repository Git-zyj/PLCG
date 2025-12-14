/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_2 <= (((var_0 || (((0 ? var_0 : 82))))))));
    var_13 = var_10;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_14 -= ((((((arr_1 [i_0 + 1]) - (arr_1 [i_0 - 2])))) ? (min((arr_2 [i_0 + 1]), (arr_1 [i_0 - 1]))) : ((-170464893 ? (arr_2 [i_0 - 1]) : var_7))));
        var_15 = (arr_1 [i_0 - 2]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_16 &= (max(((((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])))), ((((((arr_4 [i_1]) ^ var_1))) ? ((2000250809 ? 0 : (-9223372036854775807 - 1))) : (min(4766493243401360577, var_9))))));
        var_17 = ((~(min((arr_4 [i_1]), 2000250809))));
    }
    for (int i_2 = 4; i_2 < 19;i_2 += 1)
    {
        var_18 = ((((((((var_6 << (((arr_4 [i_2]) + 6588))))) ? ((1543654 ? var_0 : (arr_4 [i_2 - 2]))) : ((32767 ? 170464893 : 8191))))) ? (max((min(14991935877502364016, 18446744073709551615)), (arr_3 [i_2 + 1]))) : (arr_3 [i_2 + 1])));

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_10 [i_2 - 3] [i_2 - 1] = -2000250810;
            var_19 = (((((arr_4 [i_2 - 2]) >= (arr_4 [i_2]))) || (((((-2000250810 < (arr_3 [i_2]))))))));
            var_20 = (max(var_20, ((((((((arr_9 [i_2 + 1] [i_3]) ? 97 : 127)) - (((12393391421723432247 == (arr_8 [i_2 - 3])))))) & (arr_6 [i_2 - 3]))))));
            var_21 = (min((((arr_8 [i_2]) * ((32767 ? 11881608922800136834 : (arr_9 [i_2] [14]))))), (arr_5 [i_2 + 1])));
        }
        var_22 = ((-121 ? (((max(1005739268, (arr_8 [i_2]))) >> ((-(arr_6 [i_2]))))) : ((((arr_6 [i_2 - 2]) || (arr_6 [i_2 + 2]))))));
    }
    #pragma endscop
}
