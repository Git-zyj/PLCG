/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((-531090030 ? (min(var_5, 0)) : ((min((max(1, var_6)), var_2)))));
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    var_14 = arr_2 [4] [4] [4];
                    var_15 &= -28;
                }

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_16 &= (arr_2 [1] [i_1] [i_1]);
                    var_17 = ((1 ? 13418049162745566428 : -252794093));
                }
                var_18 = (arr_9 [i_0] [i_0]);
                var_19 = (arr_7 [i_0]);
            }
        }
    }
    var_20 = (max(var_3, (max((-127 - 1), var_4))));

    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        var_21 = ((((min((min((arr_11 [i_4 - 1] [i_4 - 1]), var_6)), 1))) ? (arr_10 [i_4]) : (((arr_10 [i_4]) ^ (arr_10 [i_4])))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 21;i_6 += 1)
            {
                {
                    arr_16 [14] [21] [14] = ((((arr_11 [i_4 - 1] [i_5 - 1]) || (arr_12 [i_4 + 3] [i_5 - 1]))) ? ((((max(1, -1283326570))) ? ((994526888 ? var_11 : (arr_11 [3] [i_4 + 2]))) : (arr_11 [i_6 - 3] [i_5 + 2]))) : (arr_11 [i_5 + 2] [i_6 - 1]));
                    var_22 = (max((arr_12 [i_4] [i_6 - 1]), (max((-2147483647 - 1), 1))));
                }
            }
        }
        var_23 &= max(var_0, (max((min(var_5, (arr_11 [i_4] [16]))), ((max(var_0, var_2))))));
    }
    #pragma endscop
}
