/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_10 = ((min((arr_0 [i_2 - 1]), (arr_0 [i_2 - 1]))));
                    var_11 = (max(var_11, ((max(var_2, ((max((arr_1 [18]), -76))))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_12 *= var_4;
        var_13 |= 90;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                {
                    var_14 = (max(var_14, ((((((arr_9 [i_6] [i_5] [18]) << (arr_17 [i_5]))) * 81)))));

                    for (int i_7 = 3; i_7 < 10;i_7 += 1)
                    {
                        arr_20 [i_7] [i_5] [i_5] [i_5] [i_4] |= var_2;
                        var_15 = (!-76);
                    }
                }
            }
        }
        arr_21 [i_4] = (((arr_1 [i_4]) ? (((arr_19 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) ? var_0 : 99)) : (((-(arr_1 [i_4]))))));
    }
    #pragma endscop
}
