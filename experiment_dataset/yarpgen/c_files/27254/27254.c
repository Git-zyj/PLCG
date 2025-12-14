/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(((!var_14) + 0))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_17 = ((125 ? (min((arr_1 [i_0] [i_0]), ((-(arr_1 [i_0] [i_0]))))) : ((~((min((arr_1 [i_0] [i_0]), (arr_0 [i_0]))))))));
        var_18 = (max(var_18, (((!((!(arr_0 [i_0 - 1]))))))));
        var_19 = (max(var_19, ((((((~(~-15481)))) ? ((min((((var_11 < (arr_1 [i_0] [i_0 + 2])))), (((arr_1 [i_0 + 1] [i_0 + 1]) << (var_4 - 4212334320)))))) : ((244 ? (arr_1 [i_0 - 1] [i_0 + 3]) : 659701374)))))));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        var_20 = (min(var_20, (((((arr_2 [i_1 + 3] [i_1 - 2]) + ((min(254, 3635265903)))))))));
        arr_6 [i_1] [i_1 - 3] = (max((((max((arr_4 [i_1]), var_0)))), (arr_2 [i_1] [i_1 + 3])));
        arr_7 [i_1] = 31802;
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_21 = (min(var_21, (((((-(305831624 | var_5)))) ? (min((arr_9 [i_2]), (max(var_12, (arr_11 [4] [i_2]))))) : ((-(max(0, var_14))))))));
        var_22 = (max(var_22, (~var_7)));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    {
                        var_23 = (((arr_9 [i_2]) <= ((max(255, 0)))));
                        var_24 = (max(var_24, (arr_20 [i_5] [i_3 + 2] [i_3 + 2] [i_2])));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_25 |= var_15;
        var_26 = (max((~var_14), 305831624));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        var_27 = (max(var_27, -181));
        arr_27 [i_7] = -26346;
    }
    var_28 = 4294967295;
    var_29 = (((((-5082598290925151996 <= 130) ? var_10 : (min(var_13, var_11)))) != ((((min(-3866580882901775591, 232))) ? (min(var_10, var_4)) : (min(var_15, var_0))))));
    #pragma endscop
}
