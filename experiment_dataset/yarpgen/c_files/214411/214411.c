/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 ^= -259214702;
        var_15 ^= var_1;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_16 = (min(var_16, var_7));
                        var_17 = ((var_3 ? ((50747 ? (arr_1 [5]) : var_13)) : ((-2963243793169213816 ? var_6 : var_13))));
                        var_18 ^= (((~1347917323059948940) ? (arr_10 [i_0] [2] [i_2] [i_3]) : var_7));
                        var_19 ^= ((var_2 ^ (arr_6 [i_0] [i_1] [i_2] [i_3])));
                    }
                }
            }
        }
        var_20 ^= var_2;
        arr_11 [14] = ((-((150 ? var_12 : (arr_8 [16] [i_0])))));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                var_21 = (((((arr_4 [i_4]) ? 14764 : (arr_3 [i_5] [i_4])))) / (((~var_13) ? var_11 : ((~(arr_2 [i_4] [i_5]))))));
                arr_17 [i_4] = var_13;
            }
        }
    }
    var_22 = (min(var_22, (((!(((14771 ? 50772 : (var_0 < var_11)))))))));

    /* vectorizable */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_23 = ((1 ? ((((arr_2 [i_6] [i_6]) < (arr_19 [i_6])))) : (!var_2)));
        var_24 = (arr_5 [i_6] [4] [4] [i_6]);
    }
    #pragma endscop
}
