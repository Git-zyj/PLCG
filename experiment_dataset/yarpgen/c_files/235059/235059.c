/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_13 = (max(var_13, ((((!1) ? -2062535837 : (((var_5 + 9223372036854775807) << (var_10 - 25399717))))))));
                        arr_9 [15] [1] [6] [i_3] = ((((!(arr_6 [1] [i_0] [0] [i_3] [i_2 - 1] [i_2]))) ? (((~(arr_8 [7] [i_1 - 2] [7])))) : (arr_1 [i_0])));
                        arr_10 [i_0] [i_1] [i_3] [13] = ((var_9 ? (arr_8 [i_1 + 2] [i_2 + 1] [i_3]) : 7));
                    }
                }
            }
        }
        var_14 -= ((arr_1 [i_0]) ? var_9 : var_6);
        var_15 = ((var_7 ? ((var_1 ? (arr_1 [i_0]) : -43)) : (arr_2 [i_0] [i_0] [i_0])));
    }
    #pragma endscop
}
