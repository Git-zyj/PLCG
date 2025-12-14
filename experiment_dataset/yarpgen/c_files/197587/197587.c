/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 |= (min((min((arr_1 [i_0]), ((((arr_0 [i_0] [20]) ? 25707 : (arr_0 [i_0] [8])))))), (((-((((arr_1 [4]) < 39829))))))));
        arr_2 [i_0] [10] &= (((((arr_0 [i_0] [20]) ? (arr_0 [i_0] [20]) : (arr_0 [i_0] [6])))) ? (arr_1 [i_0]) : (((arr_1 [i_0]) & (arr_0 [i_0] [18]))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_15 *= ((!(arr_4 [i_2] [i_1])));
            var_16 -= (arr_5 [i_2] [i_1]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_13 [i_4] [i_4] [i_4] [i_1] = (((arr_6 [i_1] [i_1]) ? (arr_9 [i_2] [i_4 - 3]) : (arr_9 [i_1] [i_3])));

                        for (int i_5 = 2; i_5 < 16;i_5 += 1)
                        {
                            var_17 = (max(var_17, (((2426905999 ? (arr_0 [i_4 - 3] [i_5]) : (!50261))))));
                            arr_17 [i_1] [8] [i_3] [i_2] [10] [i_1] |= (((((-1638 ? (arr_9 [i_2] [10]) : (arr_6 [6] [i_2])))) ? (arr_10 [i_4] [i_4 - 3] [i_4] [i_5 - 1]) : (arr_0 [i_2] [i_2])));
                            var_18 ^= ((~((~(arr_9 [i_2] [i_2])))));
                        }
                    }
                }
            }
            arr_18 [i_2] [i_1] = (arr_10 [i_1] [i_1] [i_1] [i_2]);
        }
        var_19 -= max((((((min((arr_9 [13] [i_1]), (arr_12 [i_1])))) ? (arr_6 [i_1] [i_1]) : 25707))), (min((arr_5 [i_1] [i_1]), ((-(arr_7 [i_1] [14] [i_1]))))));
    }
    var_20 |= var_11;
    #pragma endscop
}
