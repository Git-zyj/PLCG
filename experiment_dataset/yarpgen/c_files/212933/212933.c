/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((var_6 ? var_6 : var_8)), ((((((-10699 ? var_9 : var_12))) && (var_5 != var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 |= ((-((+((((arr_0 [4]) && var_5)))))));
                arr_5 [i_0] [i_1] [i_1] = (arr_4 [i_0] [i_1]);
                arr_6 [i_0] = (((((((((arr_4 [i_1] [i_0]) ? var_11 : var_8))) ? (arr_4 [i_0] [i_1]) : (((!(arr_0 [i_0]))))))) && (((((33554431 ? (arr_0 [i_0]) : 13)) & (((arr_1 [i_0] [i_1]) ? -10699 : (arr_0 [i_0]))))))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    var_22 = ((~((var_12 ? var_15 : var_0))));
                    var_23 ^= (((arr_1 [i_2] [i_2]) - (arr_8 [i_0] [i_0] [i_0] [i_0])));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_24 = ((var_7 ? var_4 : ((var_9 ? (arr_11 [i_3] [i_3]) : (arr_10 [i_3])))));
        var_25 -= (((~var_3) ? ((var_17 ? -10699 : (arr_11 [1] [i_3]))) : 18));
        var_26 = (max(var_26, var_14));
    }
    #pragma endscop
}
