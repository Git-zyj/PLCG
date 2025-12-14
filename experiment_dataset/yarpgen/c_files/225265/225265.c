/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 65527;
    var_15 *= ((var_9 ? -15506 : (((var_5 ? var_0 : 15048955703157402344)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [i_2] [13] [i_2] = ((((((8191 ? 2147483637 : (arr_2 [i_1] [i_2] [i_4]))) << ((min((arr_2 [i_4] [i_0] [i_0]), var_1))))) < ((var_9 ? (arr_2 [14] [i_0] [i_0]) : 1))));
                                arr_13 [13] [i_1] [i_1] [i_1] [i_1] [i_1] = var_7;
                                var_16 &= ((-(arr_7 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0])));
                            }
                        }
                    }
                }
                arr_14 [1] = var_0;
                arr_15 [i_0] [i_0] [i_0] &= (((-(arr_11 [i_1] [i_0] [7] [11] [i_0]))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {
        var_17 = (arr_17 [i_5] [i_5]);
        arr_18 [i_5] = (arr_17 [i_5] [i_5]);
        arr_19 [i_5] [i_5] = -372214457;
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {
        var_18 = (((((min(2147483637, var_13)) ? (((arr_20 [i_6]) ? 1072693248 : var_8)) : (arr_16 [i_6] [i_6])))));
        arr_22 [i_6] [i_6] = (max((arr_17 [i_6] [i_6]), (var_4 / -15488)));
    }
    #pragma endscop
}
