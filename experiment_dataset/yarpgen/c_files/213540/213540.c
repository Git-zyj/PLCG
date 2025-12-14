/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_13 = (max(var_13, (--1)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [0] [i_1] [i_1] = (((((124 >> (-15962 + 15962)))) ? (~1) : (arr_5 [i_1] [8] [11])));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((-(arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_1])));
                    var_14 = (min(var_14, ((((arr_2 [1]) ? (arr_2 [16]) : (arr_6 [12] [2]))))));
                }
            }
        }
        arr_9 [i_0 - 2] = -var_0;
        var_15 = (((var_2 <= 3093131826208841122) ? (arr_6 [i_0 - 3] [12]) : 1));
        var_16 = (max(var_16, (arr_3 [i_0 + 1])));
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_17 = (var_12 && 1);
        var_18 = (~-15962);
    }
    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        var_19 = (((arr_2 [4]) << (-var_3 - 18564)));
        var_20 += ((~(max((arr_1 [i_4] [i_4 - 1]), (-2147483647 - 1)))));
        arr_14 [i_4] [i_4 - 1] = 1;
        var_21 = (((arr_0 [16]) ? (arr_11 [3]) : ((max(67100672, (arr_1 [i_4 + 1] [i_4]))))));
    }
    var_22 = (~2147483647);
    #pragma endscop
}
