/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = (arr_0 [i_0]);
        var_15 = (~-3674549339370457539);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_16 = (max(var_16, (var_9 % 3674549339370457538)));

        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            var_17 = (arr_3 [i_1]);
            var_18 = ((((arr_3 [i_1]) ? (arr_5 [i_1] [i_1] [i_2]) : 3674549339370457539)));
        }
    }
    for (int i_3 = 3; i_3 < 9;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_19 = ((~((var_8 ? (arr_2 [i_3 + 3] [i_3 + 3]) : 439998387))));
            var_20 = (min(var_20, -50162));
            var_21 = (max(var_21, var_1));
        }
        var_22 = ((((min((((arr_10 [i_3] [4]) ? (arr_4 [18]) : var_8)), ((var_13 ? -439998387 : (arr_6 [6])))))) ? ((((((var_4 | (arr_9 [2] [i_3 + 4] [i_3 + 4])))) ? ((350053150996495025 ? (arr_4 [18]) : 50162)) : (~7302)))) : ((2147483392 - (arr_7 [i_3 + 4])))));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_23 = (max(var_23, (arr_4 [i_5])));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_19 [i_5] [i_6] [i_7] = (arr_12 [i_5]);
                    var_24 = (min(var_24, ((min((arr_18 [i_5] [i_6 + 1] [i_5]), var_11)))));
                    var_25 = (min(var_25, var_13));
                    var_26 = 15825427111111570660;
                    var_27 = (((((((((arr_14 [i_6] [i_6 + 3]) ? (arr_3 [i_6]) : var_4))) ? (arr_17 [i_6 + 2] [i_6 + 1] [i_6 + 1]) : (((arr_15 [i_6] [18] [i_6]) ^ var_2))))) ? (((var_0 ? -439998398 : 0))) : ((+(((arr_6 [i_6]) ? (arr_14 [i_6] [6]) : var_9))))));
                }
            }
        }
    }
    var_28 = (max(-var_1, var_0));
    var_29 = (min(var_29, ((max(var_4, var_10)))));
    #pragma endscop
}
