/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        arr_11 [11] [i_1] [i_0] [i_3 + 1] = var_9;
                        var_13 -= var_1;
                        var_14 = (min(var_14, (((arr_10 [i_0] [i_1] [10] [i_3]) ? (max(1779953301230407736, (arr_5 [i_0] [12] [i_2]))) : ((((((-(arr_5 [i_0] [i_0] [i_0]))) + 9223372036854775807)) >> (-4600312367857768398 + 4600312367857768418)))))));
                        var_15 = ((var_6 ? (((arr_2 [i_3 + 1]) ? ((var_2 ? -1 : (arr_5 [i_2] [i_2] [i_2]))) : (max(-744773578, (arr_0 [i_1] [i_2]))))) : 344246207733646558));
                    }
                    for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_16 = (max(var_16, (((var_3 ? (min((arr_7 [i_0] [i_0] [i_0] [8]), (arr_3 [14] [0]))) : -19)))));
                        var_17 -= (arr_7 [14] [1] [14] [1]);
                        var_18 = (-2147483647 - 1);
                    }
                    for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        var_19 = (arr_14 [i_0] [i_1] [i_2] [i_2] [i_5] [i_2]);
                        var_20 ^= var_7;
                    }
                    var_21 &= ((((max((arr_8 [i_1]), (!-7619409697983865476)))) ? var_6 : (min(((-8859355824390534866 ? var_6 : var_3)), (!var_0)))));
                    var_22 = (((-99 + 2147483647) << (1982866363 - 1982866363)));
                    var_23 = (max(var_23, (arr_1 [i_0])));
                }
            }
        }
    }
    var_24 = (((((1675469065 % (((var_0 ? 21545 : 1)))))) ? var_6 : var_0));
    var_25 &= ((var_10 ? var_0 : var_9));
    #pragma endscop
}
