/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((((~(~var_7)))), (max(-var_1, (min(var_7, var_5))))));
    var_11 = (!var_6);
    var_12 = (~var_8);
    var_13 = var_5;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_14 = var_3;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    {
                        var_15 = (!17991);
                        var_16 = ((var_0 >> (((min(var_9, (arr_8 [i_0 + 2] [i_1] [i_2] [i_3]))) - 46416))));
                    }
                }
            }
        }
        arr_11 [i_0 - 1] = var_7;
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_17 = ((!(((!var_7) || var_2))));
                        arr_23 [i_4] = (var_8 || var_7);
                        var_18 = var_5;
                        var_19 = (max(var_19, var_9));
                    }
                }
            }
        }
        var_20 = ((-((202 ? 71 : 98))));
        arr_24 [i_4] &= (!90);
    }
    #pragma endscop
}
