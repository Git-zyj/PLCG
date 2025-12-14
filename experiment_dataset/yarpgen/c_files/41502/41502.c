/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((-915839196 ? (915839214 / var_3) : ((((arr_2 [i_0] [3]) ? var_2 : var_13)))))) ? (((((arr_2 [i_0] [i_0]) >= 3379128099)) ? (915839196 / 15) : (((((arr_1 [i_0]) != var_8)))))) : ((((!(((~(arr_1 [i_0]))))))))));
        var_16 = ((~((((((arr_0 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : var_14))) + (((arr_0 [i_0] [20]) + (arr_2 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_17 = ((((((((var_3 ? var_12 : var_11))) ? (((arr_2 [i_1] [i_1]) | (arr_4 [i_1] [0]))) : (arr_6 [i_1])))) / ((~(((arr_1 [3]) ? 915839196 : (arr_6 [i_1])))))));
        var_18 = (!169732866);
        arr_7 [8] |= ((((((((arr_5 [i_1]) ? var_14 : 915839196))) ? 255 : ((var_2 ? 157 : 0))))) ? (((((var_4 ? var_1 : var_7))) ? ((1 ? 54624 : 11)) : ((3379128091 ? 8 : var_14)))) : (((585455388 ^ 11098) ^ (((-492482983 + 2147483647) << (2146959360 - 2146959360))))));
        arr_8 [i_1] = (--3379128104);
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_19 = (((((((((arr_9 [i_2]) ? (arr_10 [i_2]) : (arr_9 [i_2])))) ? ((18446744073709551615 ? (arr_10 [i_2]) : var_15)) : ((var_1 ? 65518 : 0))))) ? (((!var_14) ? (((0 && (arr_10 [13])))) : ((-(arr_10 [11]))))) : (((17 != 61512) ? (~var_1) : (255 && 22222)))));
        var_20 = ((((-(var_6 && var_7))) >= ((492482983 ? 30720 : 0))));
    }
    var_21 = ((~((((var_15 ? var_14 : var_15)) / (var_7 / var_13)))));
    #pragma endscop
}
