/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_7;
    var_12 = ((var_1 + ((max(var_10, var_8)))));
    var_13 = ((31240 >= (max(((max(4294967294, 1))), (max(var_1, var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = (arr_5 [i_1] [i_2 - 2]);
                    arr_8 [i_0] [i_2] [i_0] [i_2 - 2] = (max((arr_0 [i_2 + 2]), var_3));
                    arr_9 [i_0] [i_0] [i_2] [i_0] = (min((arr_7 [i_0] [i_0] [i_0] [i_0]), (((arr_3 [i_0]) ? (((arr_7 [i_0] [i_1] [i_1] [i_1]) ? var_7 : 1)) : (max(23, (arr_3 [i_0])))))));
                    var_15 = (((min(((((arr_4 [i_0] [i_0] [i_0]) == 12197578360929815539))), ((-31245 ? 576460752303422464 : 16054437635106297019)))) ^ (min(((18446744073709551615 ? 576460752303422451 : (arr_6 [i_1] [i_1]))), (arr_2 [i_0])))));
                }
            }
        }
    }

    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {
        var_16 = (((-(arr_5 [i_3 - 2] [i_3 - 1]))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    {
                        var_17 = (arr_19 [i_4] [i_4]);
                        var_18 = (((31245 & (min(-576460752303422451, 18446744073709551591)))));
                        var_19 = 12;
                    }
                }
            }
        }
    }
    #pragma endscop
}
