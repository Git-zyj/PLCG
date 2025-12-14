/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_15 = (((((arr_0 [i_0]) ? ((((arr_0 [i_0 + 2]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 3])))) : (~var_4))) >> (((((~(arr_0 [i_0])))) + 3778192652572686415))));
        var_16 += max((arr_0 [i_0 - 1]), ((((max((arr_1 [i_0 - 1]), (arr_0 [i_0 - 1])))) ? (min((arr_0 [i_0]), (arr_1 [i_0 + 1]))) : var_0)));
        var_17 = ((536869888 ? ((55562 ? -1 : -1)) : -536869894));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            {
                arr_7 [i_1 - 1] [i_1 + 1] = (0 == 1);
                var_18 = (~(arr_0 [i_1]));
                var_19 = (arr_4 [i_1 + 2] [i_2]);
                var_20 = (max(((~(arr_4 [i_1 + 1] [i_2]))), (arr_3 [i_1 + 1])));
            }
        }
    }
    var_21 = var_3;

    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        var_22 = (2251799813668864 - 2147221504);
        arr_10 [1] [1] |= (((arr_9 [i_3 + 1] [i_3 - 1]) ? ((min(var_3, (arr_9 [i_3 + 1] [i_3 + 1])))) : var_5));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_23 &= min(((((min(var_12, var_12))))), (min(((min(var_5, (arr_22 [i_7])))), (max(var_6, var_9)))));
                                var_24 = (max(var_24, (~-var_12)));
                            }
                        }
                    }
                    var_25 = (arr_16 [i_3] [i_3]);
                }
            }
        }
    }
    #pragma endscop
}
