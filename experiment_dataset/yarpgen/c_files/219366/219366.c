/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_15 = ((var_7 ? (arr_2 [i_0]) : (arr_2 [i_0])));
        arr_3 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((-((-70 ? var_2 : (arr_0 [i_1])))));
        arr_9 [i_1] [14] = ((var_0 ? (max((arr_0 [i_1]), ((var_10 ? -17493 : 15113148798644321710)))) : ((((arr_4 [i_1] [i_1]) ? (arr_1 [i_1]) : (arr_5 [i_1] [i_1]))))));
        var_16 = (((((-(arr_1 [i_1])))) ? (arr_1 [i_1]) : ((-(arr_1 [i_1])))));
        var_17 = (max(var_17, (((((arr_4 [i_1] [i_1]) & (arr_7 [14] [14])))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_17 [i_2] [1] [i_4] [1] |= ((((-24 ? -24 : (1 && 3333595275065229925)))) ? (arr_10 [i_2]) : (((min((arr_0 [i_2]), (arr_15 [i_4] [i_3] [i_2]))))));
                    arr_18 [i_2] [i_2] [4] [i_2] = -1019694233;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_18 = (max(((7936 ? (arr_22 [i_6] [i_3] [i_4] [i_6 + 1] [i_6]) : (arr_22 [i_2] [i_3] [i_4] [i_6 - 1] [i_3]))), ((18446744073709543680 - (arr_22 [i_2] [i_2] [i_2] [i_6 + 4] [i_6])))));
                                var_19 = (((arr_12 [i_3]) && (((((7952 > (arr_21 [i_2] [i_2] [i_4] [i_6 + 1]))) ? (arr_11 [i_2]) : (arr_14 [i_4]))))));
                                var_20 ^= (arr_0 [i_5]);
                                var_21 = (arr_5 [i_2] [i_3]);
                                var_22 &= (arr_25 [i_3] [i_3] [i_5]);
                            }
                        }
                    }
                }
                var_23 = (max((max((arr_14 [i_2]), (arr_14 [i_2]))), (((arr_5 [i_2] [i_3]) ? (arr_14 [i_3]) : (arr_5 [i_2] [i_2])))));
            }
        }
    }
    var_24 *= var_6;
    var_25 = (((((((((var_13 ? 163 : var_5))) ? ((var_1 ? var_6 : var_5)) : (max(var_3, var_6)))) + 9223372036854775807)) << ((((var_4 ^ ((var_10 ? 1 : var_14)))) - 33354))));
    #pragma endscop
}
