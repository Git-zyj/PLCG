/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, (((((((arr_1 [i_0] [i_0]) / 224))) ? 2042269416 : var_9)))));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = (arr_6 [i_0] [i_0] [i_0]);
                    arr_9 [i_0] [i_1] [6] |= ((((!(arr_4 [i_0] [i_1] [i_2] [i_1]))) ? (~31) : (((((31 ? (arr_2 [i_0] [i_1] [i_2]) : 17))) ? (arr_4 [14] [14] [14] [i_1]) : (arr_7 [i_0] [i_1] [i_2])))));
                }
            }
        }
    }
    var_12 = var_3;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_13 += (1 <= var_3);
        arr_13 [i_3] = ((+(((arr_11 [i_3] [i_3]) ? 44848 : var_9))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_14 &= (((((~(arr_4 [2] [i_4] [18] [i_4])))) ? ((+((((arr_4 [i_4] [i_4] [i_4] [i_4]) || 8378156240173883528))))) : -1));
        var_15 = var_1;
    }
    #pragma endscop
}
