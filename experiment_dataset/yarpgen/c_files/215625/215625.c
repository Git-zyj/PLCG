/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = ((((((!var_12) ? (arr_2 [i_0]) : var_9))) ? 65516 : ((max(20, (((0 < (arr_3 [i_0] [i_1])))))))));
                    arr_9 [1] |= (arr_8 [i_0 - 2]);
                }
            }
        }
        var_15 ^= -13;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_16 = arr_8 [i_3];
                        var_17 += 1;
                    }
                }
            }
        }
    }
    var_18 = -99;
    var_19 = var_11;
    var_20 = (((((var_12 & (!67)))) ? var_8 : var_2));
    var_21 &= var_8;
    #pragma endscop
}
