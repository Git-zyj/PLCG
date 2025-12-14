/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_16 |= (arr_4 [i_0] [i_1]);
                var_17 &= (min((((arr_3 [i_0]) ? (min(17519371198690479063, -361916131)) : (-32767 - 1))), (min(10608826151590671557, -32744))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_18 = (min(var_18, (((((max(((var_8 << (((arr_5 [i_2]) + 140)))), (arr_5 [i_2])))) ? (63 + var_11) : var_15)))));
        var_19 = (max(var_2, var_3));
        arr_8 [i_2] [i_2] = (((arr_5 [i_2]) ? (max((arr_6 [i_2]), ((min((arr_7 [i_2]), var_9))))) : (((10856517041126752159 ? -107 : 16891)))));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    arr_15 [i_3] [10] = ((((min((arr_11 [i_4 - 1]), (arr_12 [i_4 - 3])))) * ((min((arr_14 [2] [i_4 - 1]), (arr_11 [i_4 - 3]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_20 &= (1 & -34);
                                var_21 = (((-106 <= (arr_7 [i_3]))));
                            }
                        }
                    }
                    var_22 = var_2;
                }
            }
        }
        arr_22 [i_3] = (arr_6 [0]);
        var_23 = ((((arr_12 [i_3]) & (arr_12 [i_3]))));
    }
    var_24 = ((var_1 ? ((((var_5 ? var_8 : 232)))) : var_9));
    #pragma endscop
}
