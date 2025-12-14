/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(1685092162, (max((var_6 && var_8), var_6))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = -1685092162;
        var_14 = ((((arr_1 [i_0]) ? -1685092162 : (arr_1 [i_0]))));
        var_15 = (min(var_15, (arr_0 [i_0] [i_0])));
        var_16 = max(((~(min((arr_0 [i_0] [i_0]), (arr_3 [i_0] [i_0]))))), (max((arr_0 [i_0] [i_0]), 1828431646)));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            arr_8 [i_0] [i_0] = (arr_1 [i_0]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_17 = ((((((-1685092163 + 2147483647) >> (-1 + 25)))) ? (((!(arr_9 [i_2] [i_1] [i_0])))) : var_10));
                        arr_13 [i_0] [i_0] [i_0] [i_0] = arr_10 [i_1 + 1] [i_1] [i_1 - 1] [i_1 - 1];
                    }
                }
            }
            var_18 ^= 6;
            var_19 = (((arr_10 [i_0] [i_0] [i_0] [i_1]) != var_9));
        }
    }
    var_20 = (var_6 - var_3);
    #pragma endscop
}
