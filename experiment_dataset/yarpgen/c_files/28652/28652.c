/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 &= (((((arr_2 [1]) ? (((~(arr_2 [10])))) : (max((arr_0 [i_0]), var_1)))) <= (arr_2 [i_0])));
        var_18 = var_13;
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_19 |= ((((max(((9 ? 13321861985173388818 : var_5)), (max((arr_3 [i_4]), var_5))))) ? (~-2435544608785759877) : (max((((2 ? 1087 : var_10))), var_7))));
                        var_20 ^= (((!(arr_13 [i_2] [i_2] [i_1] [i_2] [i_1]))));
                    }
                }
            }
            var_21 = ((~((min(var_2, (arr_4 [i_1 - 2] [i_1 + 1]))))));
            var_22 = ((2446887477838481403 || (((((((arr_11 [i_1] [i_1] [i_1] [i_1]) - var_8))) ? (arr_8 [i_1] [i_1] [i_1]) : (!var_4))))));
        }
        arr_14 [16] [1] = ((((var_16 % (arr_7 [i_1] [i_1] [i_1 + 1]))) % -1103));
    }
    var_23 -= var_4;
    var_24 = var_3;
    var_25 = (((!var_1) % (((~var_2) ? var_6 : (21 == var_11)))));
    var_26 = (((-1074 - -1097) ? var_11 : (((var_13 == 5124882088536162797) ? 1097 : var_4))));
    #pragma endscop
}
