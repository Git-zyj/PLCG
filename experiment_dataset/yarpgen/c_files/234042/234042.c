/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            {
                var_19 = 1;
                arr_6 [i_0] = 1;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_20 = max(1, ((~(arr_10 [i_0 - 1] [i_1 - 2] [i_2 - 1] [i_3 - 1]))));
                            var_21 = (-(1 && 1));
                        }
                    }
                }
                var_22 = (max(var_22, ((max(1, (arr_4 [i_0] [i_1] [i_1]))))));
            }
        }
    }
    var_23 += var_2;

    for (int i_4 = 3; i_4 < 18;i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] [i_4] = ((((!(((1 ? 1 : 1))))) || ((((((-(arr_11 [i_4] [i_4])))) / (arr_12 [i_4]))))));
        var_24 += 1;
        arr_14 [i_4] [i_4 + 1] = (min((min((1 ^ var_17), (min(0, (arr_12 [i_4]))))), (((arr_12 [i_4 + 3]) / var_4))));
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_25 = (~var_4);
        arr_19 [i_5] [16] = (arr_15 [i_5]);
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            {
                arr_24 [i_6] = ((1 ? ((((((~(arr_23 [i_6 - 1] [i_6 - 1] [i_6])))) | var_18))) : (min((arr_21 [i_7 + 1] [i_7]), ((((arr_23 [i_6 + 2] [i_6] [i_6]) ? 1 : var_9)))))));
                var_26 = var_3;
                var_27 -= ((var_6 ? var_4 : var_11));
            }
        }
    }
    #pragma endscop
}
