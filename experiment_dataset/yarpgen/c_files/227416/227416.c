/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= ((0 ? 0 : 0));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((min(0, (max(4294967295, 4294967283)))));
        arr_4 [i_0] = (arr_1 [i_0]);
        arr_5 [i_0] = ((-(arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_9 [i_1] = (min((((13 + 2) * (4294967295 == 17383399440539672745))), (arr_7 [i_1])));
        var_19 &= ((-(min(1, 12))));
        arr_10 [i_1] = (max(var_3, 1));
    }
    var_20 = (min(var_20, var_12));
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 22;i_3 += 1)
        {
            {
                arr_16 [i_3] [i_3] |= -var_8;
                var_21 = (13 ? 1 : 1);
                var_22 = (((arr_13 [i_3]) ? ((((min((arr_11 [i_3]), var_0))) ? 1 : (((arr_13 [i_2]) / var_2)))) : var_12));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_23 ^= ((~(max(var_9, (arr_11 [i_2 + 1])))));
                                arr_24 [i_2] [i_2] [i_2] [i_5] [i_2] [i_2] = (((arr_12 [i_5] [i_6]) ? -var_5 : ((-((var_11 ? var_12 : 3755110001235098614))))));
                                var_24 += (((-4648166521084540073 > (arr_19 [i_2 - 2] [i_3 - 2] [i_3 - 1]))) ? 17383399440539672745 : (((max((arr_19 [i_2 - 2] [i_3 - 2] [i_3 - 1]), (arr_19 [i_2 - 2] [i_3 - 2] [i_3 - 1]))))));
                                arr_25 [i_2] [i_2] [i_3] [i_3] [i_3] [i_5] [i_5] = var_4;
                            }
                        }
                    }
                }
                var_25 = (((arr_1 [6]) ? (arr_1 [2]) : (min((arr_13 [i_3 - 2]), (arr_1 [2])))));
            }
        }
    }
    #pragma endscop
}
