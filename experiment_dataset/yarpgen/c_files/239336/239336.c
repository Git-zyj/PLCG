/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_3 ? var_3 : var_3)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_18 += ((-126 ? (-127 - 1) : 148305863));
                        var_19 = (max(var_19, (((-((((((!(arr_5 [i_0] [10] [i_0] [i_0])))) <= (arr_8 [1] [i_2 - 3])))))))));
                    }
                }
            }
        }
        var_20 ^= (((((-860981588 && (-9223372036854775807 - 1)))) < (!var_12)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        arr_12 [i_4] = ((-31134 ? 15 : 5932947954251963165));
        var_21 = var_7;
        var_22 |= ((((((arr_4 [i_4 + 1] [i_4] [0] [i_4]) * var_11))) * ((var_15 * (arr_2 [21] [i_4])))));
        var_23 = ((-((~(arr_8 [i_4 + 1] [21])))));
    }
    var_24 = (max(var_24, ((max((((var_8 || (((var_13 ? var_7 : var_9)))))), ((var_16 ? (!var_12) : (var_8 || var_12))))))));
    #pragma endscop
}
