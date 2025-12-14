/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((-((((119 ? var_14 : var_0)) % (var_5 + var_10)))));
    var_17 = (max(var_17, (((((((((0 ? var_6 : var_6))) ? ((var_2 ? var_7 : 1)) : ((var_11 ? var_7 : var_14))))) ? (((!(((var_15 ? 1 : var_12)))))) : var_12)))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_2] [i_3] &= var_6;
                        arr_12 [i_1] &= (((max((((arr_7 [i_0] [i_0] [10] [i_0] [i_3]) ? 2810100990 : (arr_9 [i_1] [i_1] [i_1]))), ((((arr_10 [i_0] [i_0] [1] [i_3]) ? var_10 : var_15))))) > (((-var_3 ? var_10 : ((min((arr_4 [i_0] [i_0]), (arr_10 [i_1] [8] [8] [8])))))))));
                    }
                }
            }
        }
        arr_13 [4] [i_0] = ((((arr_0 [i_0]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 2]))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
        {
            var_18 = ((-(arr_8 [i_0 - 1] [i_0 + 1] [i_0 - 2])));
            var_19 += (((arr_5 [i_0 - 1] [i_4] [1]) ? (arr_5 [i_0 + 1] [i_4] [12]) : (arr_5 [i_0 - 1] [i_4] [i_4])));
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
        {
            var_20 = 256;
            arr_19 [11] [i_5] = (arr_3 [0] [0] [0]);
        }
    }
    var_21 &= ((var_11 ? (min(var_15, 3488071957)) : var_5));
    #pragma endscop
}
