/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [1] &= (min(var_9, ((min((((var_6 ? 3 : 133))), 1248150663)))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_10 = (((-9223372036854775807 - 1) ? (arr_3 [i_0] [i_2] [i_3]) : -8772695613134447352));
                        var_11 = ((-(max(18701, (arr_2 [i_1 - 1] [i_2 + 1])))));
                    }
                    for (int i_4 = 3; i_4 < 18;i_4 += 1)
                    {
                        arr_13 [i_2] [i_2] = ((((((((-1498932974139123810 ? 255 : var_5))) ? (arr_3 [i_1 - 2] [i_2 - 1] [i_4 + 1]) : (max((arr_9 [i_0] [i_0] [i_2] [i_0] [i_4]), 3538781053))))) ? ((((arr_4 [i_1 - 2] [i_2 + 1] [i_2 - 1]) & (arr_4 [i_1 - 2] [i_2 - 1] [i_2 - 1])))) : (((((0 ^ (arr_5 [i_0] [i_1] [i_1])))) ? -8884473360144851984 : var_6))));
                        var_12 = (min(var_6, (((((var_8 ? (arr_4 [0] [i_2] [i_2]) : var_5))) ? (min(4838951248060287803, 433412740)) : (arr_11 [i_0] [i_0] [i_4] [i_4 + 1])))));
                        var_13 = ((-(((var_9 | var_9) ? var_5 : var_2))));
                        var_14 = (((((min(((min((-127 - 1), var_4))), (arr_0 [i_0] [i_0]))) + 2147483647)) << (var_9 - 2534128621562886591)));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_15 = (max(var_15, (((((!8884473360144851995) ? ((var_7 ? var_0 : 16368)) : var_0))))));
                        var_16 = (arr_10 [i_0] [i_1] [i_0] [i_1] [i_5] [i_5]);
                        var_17 = (arr_11 [i_0] [i_1 - 2] [i_2] [i_5]);
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_19 [i_2] [i_2] [i_2] [i_2] [15] [i_6] = (min(62687, var_9));
                        var_18 = ((+((min((arr_17 [i_0] [i_1] [i_0] [i_2] [i_2]), (arr_5 [i_0] [i_1 - 1] [i_2]))))));
                    }
                    var_19 = ((var_4 || (arr_6 [i_1])));
                    var_20 = (arr_4 [i_0] [i_1] [i_2]);
                }
            }
        }
    }
    var_21 *= (~0);
    #pragma endscop
}
