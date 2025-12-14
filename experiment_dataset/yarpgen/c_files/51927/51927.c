/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (min(9223372036854775807, var_4));
        arr_4 [i_0] &= 154;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] = 1;
        arr_8 [i_1] [i_1] = (arr_6 [2] [i_1]);
        var_13 -= (arr_5 [i_1] [i_1]);
        var_14 &= (((arr_5 [5] [i_1]) && ((max(60010, (arr_5 [i_1] [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        var_15 &= -var_8;
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_16 = 8210696631246330603;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_17 -= ((arr_10 [i_2 + 1]) ? -8210696631246330603 : (((arr_19 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_4] [i_5] [i_6]) ? 8210696631246330614 : 17778)));
                                var_18 |= var_1;
                                var_19 = (arr_9 [i_5]);
                                var_20 = (arr_19 [i_6] [6] [6] [i_6 - 1] [i_6 - 1] [i_4] [i_2 + 1]);
                                var_21 -= (!60017);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_11;
    #pragma endscop
}
