/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_8);
    var_14 = (!var_5);
    var_15 = ((~((~(~158)))));
    var_16 = 24891;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = ((~(((!((!(arr_1 [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, var_6));
                    var_19 = (~var_11);
                    var_20 = ((~((~(~101)))));
                    var_21 = ((!((!(!var_5)))));
                }
            }
        }
        arr_8 [i_0] [i_0] = (~0);
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_22 = var_8;
        var_23 = var_3;
        var_24 = (((~(arr_0 [i_3]))));
        var_25 = ((-((~((~(arr_9 [i_3] [i_3])))))));
        arr_11 [i_3] = (~-115);
    }
    for (int i_4 = 2; i_4 < 23;i_4 += 1)
    {
        var_26 += (~var_7);
        var_27 = (max(var_27, (((!((!(!141))))))));
        arr_14 [i_4] [i_4] = var_5;
    }
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        var_28 = ((~(((~(arr_7 [i_5 + 2] [i_5 - 1] [i_5 - 1]))))));
        var_29 ^= (~24378);
        var_30 = ((~(((!((!(arr_0 [i_5]))))))));
    }
    #pragma endscop
}
