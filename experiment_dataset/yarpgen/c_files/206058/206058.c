/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 -= (min(1, (max((arr_6 [i_0]), (min(var_8, (arr_1 [i_0])))))));
                    var_14 -= (max(((max(1, 1))), ((var_8 ? (arr_4 [i_1 + 1] [i_1 + 2]) : (min(var_4, (arr_5 [i_2] [i_1] [i_0])))))));
                }
            }
        }
        arr_7 [i_0] = ((((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_0]))));

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_15 = var_4;
            var_16 = ((!(((((min(1436144130, var_1))) ? ((var_9 ? 1 : (arr_4 [i_3] [i_0]))) : var_9)))));
            var_17 += (min((((arr_1 [i_3]) ? var_6 : 2690180707)), (((arr_3 [i_0]) ? (arr_1 [i_3]) : (arr_3 [i_0])))));
        }
        arr_10 [i_0] &= 0;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        var_18 ^= 1;
                        var_19 = ((-(arr_20 [i_4] [i_5] [i_5] [i_4 + 1])));
                    }
                }
            }
        }
        var_20 |= var_10;
        arr_23 [i_4] = (((arr_19 [i_4] [i_4 + 1] [i_4 + 1]) ? ((var_8 ? var_10 : var_9)) : var_2));
    }
    #pragma endscop
}
