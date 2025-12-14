/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_17 = ((~(((((144115188075855864 ? var_10 : var_9))) ? (~1) : var_14))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_18 = (min((!var_9), var_3));
                    arr_10 [12] |= ((+(((!((min((-32767 - 1), -1268760661724092225))))))));
                    var_19 = (max(var_19, ((((497892001 >= ((var_0 ? var_6 : var_5))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((((((min(var_9, var_16)) ^ var_10))) <= 18066647837012237758)))));
                                var_21 = (max(var_21, 15838911409899390359));
                                var_22 *= (max((((((var_13 ? var_5 : -3571875952113362757))) ? (2607832663810161256 >> var_9) : var_3)), (((1 ? var_13 : 23747)))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        var_23 = (-19 / 1);
        arr_17 [i_5] [i_5] = ((var_6 ? ((var_5 ? var_2 : var_7)) : ((((1 ? 1 : 1)) ^ (~1)))));
        var_24 = (!-3674);
    }
    var_25 -= ((((!(((35888059530608640 ? var_2 : 1)))))));
    #pragma endscop
}
