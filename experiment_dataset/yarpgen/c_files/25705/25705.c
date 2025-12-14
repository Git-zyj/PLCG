/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_16 = ((!(-32744 ^ 11319860008436565122)));
                        var_17 = (arr_4 [i_0] [i_1] [i_2] [i_3]);
                    }
                }
            }
        }
        var_18 = ((arr_1 [i_0]) ? ((-(arr_7 [17] [3] [i_0] [0] [i_0]))) : ((((arr_0 [i_0] [1]) ? (arr_1 [i_0]) : var_5))));
        arr_8 [i_0] = ((~(arr_2 [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_19 -= ((var_3 <= (((-(arr_7 [i_4] [i_4] [i_4] [19] [i_4]))))));
        var_20 = (min(var_20, (((((14535191436497687226 ? 14535191436497687226 : 3911552637211864390))) ? 14535191436497687226 : (!0)))));
        arr_11 [i_4] = (((arr_9 [i_4]) ? (arr_9 [i_4]) : (arr_0 [i_4] [i_4])));
        arr_12 [i_4] [i_4] = (((((~(arr_4 [i_4] [i_4] [1] [i_4])))) ? (((arr_5 [i_4] [i_4]) ? (arr_1 [i_4]) : (arr_0 [i_4] [i_4]))) : var_11));
        var_21 *= (((var_7 && var_3) ? ((((var_6 && (arr_10 [i_4]))))) : var_9));
    }
    var_22 = (max(var_22, ((min((((max(var_4, var_7)) * var_6)), ((max((var_9 != var_7), (var_11 != var_6)))))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            {
                arr_18 [i_5] [i_6] = ((((max((arr_17 [5] [i_6] [i_6]), ((((arr_17 [i_5] [i_5] [i_6]) ? (arr_0 [i_5] [i_5]) : (arr_16 [i_5] [1] [i_6]))))))) ? (min(((var_3 ? (arr_17 [i_6] [12] [i_6]) : var_3)), (arr_6 [i_5] [i_5] [i_5] [i_5]))) : (arr_14 [i_5])));
                var_23 ^= (arr_5 [i_6] [i_5]);
                arr_19 [2] |= (max(((min((arr_2 [i_5] [0] [i_6 - 1]), (max((arr_13 [i_5]), (arr_13 [i_5])))))), (((var_2 | var_6) | (arr_14 [i_5])))));
            }
        }
    }
    #pragma endscop
}
