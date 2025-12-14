/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!((max(var_1, (min(42, var_1)))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = ((max(-677522676, 0)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_17 = (arr_5 [i_1]);
                        var_18 = -57136537;
                    }
                }
            }
        }
        var_19 = 1844559236;
    }
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        var_20 = ((((min(((min((arr_5 [i_4]), 0))), 6198603707936627672))) ? (max((arr_9 [i_4 + 1] [i_4 + 1] [i_4 + 1] [1] [i_4] [i_4 + 1]), (arr_12 [i_4 - 1] [i_4 + 1]))) : (((((var_13 ? (arr_4 [i_4 - 1] [i_4]) : var_5))) ? var_7 : ((var_8 ? (arr_5 [i_4]) : var_0))))));
        var_21 = (arr_6 [i_4] [4]);
        var_22 = (min((((arr_12 [i_4] [2]) ? (min(var_1, var_9)) : (arr_8 [i_4 + 1]))), (((max(-8216, var_0))))));
    }
    var_23 = (max(8216, var_12));
    #pragma endscop
}
