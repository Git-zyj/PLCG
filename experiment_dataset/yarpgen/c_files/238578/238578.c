/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_20 = (min((((arr_1 [i_0 - 1]) ? 1 : (arr_0 [i_0 + 1]))), (((arr_0 [i_0 - 3]) | (arr_3 [i_0 - 1])))));
        var_21 = ((!((((((-(arr_0 [i_0])))) ? (~var_15) : ((var_15 ? (arr_3 [i_0]) : var_4)))))));
        arr_4 [i_0 - 3] = ((-((((((-127 - 1) % 47))) ? ((var_3 ? (arr_1 [i_0 - 2]) : (arr_1 [i_0]))) : (arr_3 [i_0 + 1])))));
        var_22 = ((-21674 ? 54 : 1));
        arr_5 [i_0] = (arr_2 [i_0 - 1]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            var_23 = var_15;
            arr_10 [i_1] [i_1] = ((arr_7 [i_2 - 1] [i_2 + 2]) ? (~var_15) : (arr_7 [i_2 + 1] [i_2 + 1]));
        }
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            arr_14 [i_3] [i_1] [i_1] = ((arr_11 [i_3 - 1] [i_3 - 1]) ? (((-(arr_0 [i_3])))) : (arr_11 [i_3 + 1] [i_3]));
            var_24 = (~var_2);
            arr_15 [i_1] [i_1] [i_3] = (arr_7 [6] [i_3 - 3]);
        }
        arr_16 [i_1] = (~((var_0 / (arr_6 [i_1]))));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_25 = ((((min((arr_3 [i_4]), var_3))) ? ((-(arr_2 [i_4]))) : (~124)));
        var_26 ^= ((((((arr_12 [i_4] [i_4] [i_4]) ^ (arr_8 [i_4] [i_4])))) ? (((((1 ? var_9 : var_5))) ? ((min(-1, 19124))) : ((~(arr_8 [i_4] [i_4]))))) : (((~(arr_11 [i_4] [i_4]))))));
        var_27 = ((!(((-((max((arr_7 [i_4] [i_4]), var_8))))))));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                var_28 = (-((((!(arr_24 [i_5] [i_6]))))));
                var_29 = ((arr_22 [i_5]) ? ((((arr_22 [i_5]) == (arr_22 [i_6])))) : ((((arr_22 [i_5]) > (arr_22 [i_6])))));
                arr_25 [i_5] [i_6] = (!-18446744073709551615);
                arr_26 [i_5] [i_6] = -104;
            }
        }
    }
    var_30 = (max(var_30, var_12));
    #pragma endscop
}
