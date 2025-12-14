/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min(var_6, (((222 - var_11) - var_5)));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_14 &= ((!(max((!var_0), (((arr_2 [i_0]) || -10805))))));
        var_15 = (min(((-(arr_2 [i_0 - 2]))), ((-(arr_2 [i_0 - 2])))));
        var_16 ^= ((((max((arr_2 [i_0 + 1]), (arr_2 [i_0 - 1])))) ? (((arr_2 [i_0 - 2]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 1]))) : ((-(arr_2 [i_0 - 1])))));
        var_17 = (min((((arr_0 [i_0]) + 2587789832)), ((max(0, (arr_0 [i_0]))))));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] &= (min(((((-(arr_4 [i_1]))) > ((min(0, (arr_3 [i_1])))))), var_1));
        arr_6 [i_1 - 2] = (min((((arr_4 [i_1 + 2]) - var_0)), ((max((arr_4 [i_1 - 2]), (~1))))));
    }
    for (int i_2 = 3; i_2 < 14;i_2 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_18 = ((!(arr_8 [i_2])));
            var_19 = var_11;
            var_20 *= (((arr_7 [12]) & (arr_7 [2])));
            /* LoopNest 3 */
            for (int i_4 = 4; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_21 *= var_11;
                            arr_18 [i_2] [i_2] [i_4] [i_2] [i_6 - 1] = (arr_13 [i_2] [i_3] [i_4] [i_5] [i_6 - 1]);
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_22 = ((((max((arr_20 [i_2] [i_7] [i_2]), (arr_4 [i_2 + 2])))) ? (arr_21 [i_2] [i_2]) : ((-(arr_20 [i_2] [i_2] [i_2])))));
            var_23 |= (((-(arr_19 [i_2 + 2] [i_2 - 3] [i_2 - 1]))));
        }
        arr_22 [10] [10] &= (((((max((arr_16 [i_2 - 2] [i_2 + 2] [i_2 - 3] [i_2] [i_2 + 2] [i_2]), (arr_16 [i_2] [i_2] [i_2] [i_2] [i_2 + 2] [i_2 - 2]))))) > 2166692834013940458));
    }
    var_24 *= (+((var_11 ? (!480) : (var_11 >= var_1))));
    var_25 = (((((~((255 ? var_12 : var_11))))) ? ((((var_9 ? var_8 : 10805)))) : (~var_4)));
    #pragma endscop
}
