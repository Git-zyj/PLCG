/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    arr_7 [i_1] = (0 || -252);
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = -var_13;
                                var_18 *= ((var_14 ? (((arr_13 [i_0] [i_2] [i_4]) ? var_6 : (arr_11 [i_0] [0] [i_0] [21]))) : (((var_1 ? (arr_10 [2] [i_2] [17] [1]) : var_2)))));
                            }
                        }
                    }
                }
                arr_14 [6] [i_1] [i_0] &= -2314581239761937317;
            }
        }
    }
    var_19 = ((18446744073709551615 ? (((-9223372036854775807 - 1) ? 0 : ((2419365197887187771 ? 6 : 65525)))) : 12352));
    var_20 = (max((min(var_4, (((2202048459 ? var_3 : 65525))))), ((-((var_2 ? var_3 : var_1))))));
    var_21 |= (var_12 | 127);
    #pragma endscop
}
