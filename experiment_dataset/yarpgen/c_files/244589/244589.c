/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_11 = (~-var_0);
        var_12 = ((((var_9 ? var_9 : (arr_3 [i_0 + 2]))) % (((var_0 ? (arr_0 [i_0]) : (arr_2 [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_13 = (arr_0 [i_1 - 1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_14 -= ((((((min(var_0, -1627892617142954870)) << (arr_10 [i_1 + 1])))) ? (((((var_6 ? (arr_2 [i_1]) : var_9))))) : ((((((arr_3 [i_1]) ? 146 : var_4))) ? (((max(var_10, -101)))) : (-1555241954 + var_7)))));
                    var_15 -= (max((max((((arr_3 [i_2]) <= 219)), (((arr_10 [i_2]) != (arr_9 [16]))))), ((!(arr_1 [i_1 + 1])))));
                }
            }
        }
        var_16 = (min(var_16, ((((-(arr_0 [i_1 + 1])))))));
        var_17 -= (arr_9 [10]);
        var_18 &= (((max((~var_3), var_2)) < 0));
    }
    var_19 = var_8;
    #pragma endscop
}
