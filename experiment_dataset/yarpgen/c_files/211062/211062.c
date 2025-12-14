/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((var_7 ? var_14 : -69));
    var_17 -= (!((min(1, (min(0, var_7))))));
    var_18 = var_11;

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_19 = ((!((((var_0 ? var_15 : 0))))));
        arr_2 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_20 = min(((~(arr_3 [i_1]))), (((arr_3 [i_1]) % 1249197196)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_2] [i_1] [i_1] = ((((((~1) ? (2147483647 + 0) : 13))) ? (((((1 ? 0 : 1))) ? var_12 : ((255 ? 33987 : var_14)))) : ((-((3511708975 ? 1 : var_9))))));
                    var_21 = ((~(((arr_9 [i_1 + 1] [i_3]) ? (arr_4 [i_1]) : 14))));
                    arr_12 [i_1] [i_1] [i_1] [i_1] = 0;
                    var_22 = (min(var_22, (arr_10 [i_1] [i_3])));
                }
            }
        }
        var_23 += ((!(((-(arr_6 [i_1] [i_1 + 1] [i_1]))))));
        var_24 &= (min((arr_10 [i_1 + 1] [i_1 + 1]), ((-(arr_10 [i_1 + 1] [i_1 - 1])))));
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 23;i_5 += 1)
        {
            {
                var_25 = (~1);

                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    arr_20 [i_4] = (((min((!var_4), ((!(arr_18 [i_4] [i_4 - 1] [i_4]))))) ? (arr_16 [i_6] [i_5]) : (arr_13 [i_4])));
                    var_26 = (min(var_26, (arr_19 [i_6] [i_6] [i_6] [i_4])));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    arr_23 [i_4 - 1] [i_4] [i_4] = (!1617844318);
                    arr_24 [i_4] [i_4] [i_5] [i_4] = var_11;
                    arr_25 [i_4] [i_4] [i_7] [i_7] = (~73);
                }
                arr_26 [i_5] [i_4] [i_4] = 2497730925;
                arr_27 [i_4] [i_4] = -2677122977;
            }
        }
    }
    #pragma endscop
}
