/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_10 != 1) << 23))) || (((var_3 ? var_9 : 1))));
    var_12 = (min(var_12, (var_3 / 28)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 += ((!((max((arr_2 [2]), ((-32 ? (arr_3 [i_0]) : 1)))))));
        var_14 = ((var_1 ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : 1)) : var_10));
        var_15 = max(1, ((-7407 ? 16777215 : 1)));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_16 ^= (!1);
                    var_17 = (arr_7 [i_1] [i_2] [i_3]);
                    arr_11 [3] [3] [i_2] = ((+(max((arr_7 [i_1] [i_2] [i_1]), -7413))));
                    arr_12 [i_2] = ((((!(arr_9 [i_1] [i_2]))) ? ((max(1, 16777215))) : (arr_6 [i_3] [i_2] [i_1])));
                }
            }
        }
        var_18 *= var_0;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_19 = (max(var_19, ((((((7412 ? 2 : -1))) ? 124 : 15479479853953672436)))));
                    var_20 = (max(var_20, ((!(((~((~(arr_13 [i_5] [i_4] [i_1]))))))))));
                }
            }
        }
    }
    #pragma endscop
}
