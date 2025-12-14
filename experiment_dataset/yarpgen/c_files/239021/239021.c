/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = arr_1 [i_0];
        var_20 ^= (min((-32767 - 1), (arr_2 [i_0] [i_0])));
        var_21 += ((676515985 ? 416074761 : 112));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_22 = ((+(min((var_16 && -6922478433507202877), (((arr_5 [i_1]) ? (arr_5 [i_1]) : var_6))))));
        var_23 = ((var_18 ? ((var_19 ? (-4774906435914561607 / var_10) : 16)) : ((((((arr_5 [i_1]) ? (arr_1 [i_1]) : var_3))) ? ((var_5 & (arr_5 [i_1]))) : 511))));
        var_24 = (((+(((arr_2 [i_1] [9]) / 11)))));
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_25 *= min((arr_13 [i_2] [i_3]), (arr_13 [i_2] [i_2]));
                arr_14 [i_2] [i_2] = 112;
            }
        }
    }
    var_26 ^= var_0;

    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_27 = (max(var_27, (((((min(-94, (max((arr_16 [i_4]), var_15))))) ? var_12 : (((!(arr_6 [i_4])))))))));
        var_28 = min(var_11, (((max((arr_9 [i_4] [i_4]), (arr_12 [i_4] [i_4]))) ^ (arr_10 [i_4] [0]))));
        var_29 = ((+(min((arr_17 [i_4]), ((var_15 ? var_14 : var_18))))));
    }
    #pragma endscop
}
