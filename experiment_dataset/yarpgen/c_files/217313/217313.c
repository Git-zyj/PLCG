/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = var_14;
        var_19 += (arr_2 [20]);
        arr_5 [22] |= (10 ? ((((arr_2 [12]) >> (51662 - 51640)))) : ((0 * (arr_1 [i_0 - 3] [12]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_20 = ((-1073741824 ? (arr_2 [4]) : ((var_17 ? (arr_7 [i_1] [i_1]) : (arr_1 [i_1] [i_1])))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_21 = (max(var_21, (arr_12 [i_1] [i_2])));
                        var_22 = (var_9 ? ((((var_11 > (arr_6 [i_3] [i_3]))))) : (arr_14 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 - 2]));
                    }
                }
            }
        }
    }
    var_23 = (var_12 < var_8);
    #pragma endscop
}
