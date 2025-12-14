/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((16 ? 0 : 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((((max((arr_2 [i_1 - 1]), (arr_2 [i_1 - 1])))) ? ((+((-43 ? (arr_4 [i_0] [i_0]) : 2229342541)))) : ((((!((max(1, 3464726740)))))))));
                var_20 = (arr_4 [i_0] [i_1 + 1]);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 4; i_2 < 17;i_2 += 1)
    {
        arr_10 [i_2] = (((arr_6 [i_2]) ? (arr_7 [i_2 - 1]) : ((((arr_9 [i_2] [18]) <= (arr_9 [i_2] [i_2]))))));
        var_21 -= (!18446744073709551615);
        var_22 = (((arr_6 [i_2 + 1]) ? (arr_6 [i_2 - 2]) : (arr_6 [i_2 - 4])));
        arr_11 [0] [i_2] &= (((((1 ? (arr_8 [i_2]) : (arr_9 [i_2] [i_2])))) | -2065624754));
    }
    for (int i_3 = 3; i_3 < 16;i_3 += 1)
    {
        arr_14 [i_3] [i_3 + 2] = (min((arr_7 [i_3]), (((+(((arr_7 [10]) ? (arr_7 [i_3]) : var_16)))))));
        var_23 = 1;
    }
    #pragma endscop
}
