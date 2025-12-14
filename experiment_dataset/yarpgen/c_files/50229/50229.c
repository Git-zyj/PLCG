/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -1045095818;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 = (min((arr_0 [i_0]), (max((arr_8 [i_2] [i_1] [i_0]), (arr_8 [i_0] [i_2 - 1] [i_2])))));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_13 = arr_6 [i_0];
                        arr_12 [i_0] [i_1] [i_2] [i_2] = (min((arr_5 [i_2 + 2] [i_2 - 1]), ((+((((arr_11 [i_2] [i_1] [i_2] [i_2]) <= var_5)))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        var_14 ^= (arr_3 [i_2 + 3] [i_4 + 2]);
                        arr_15 [i_0] [i_1] [i_1] [i_2] [i_2] = (arr_0 [i_0]);
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] = (arr_6 [i_0]);
                        arr_19 [i_0] [i_2] = (var_1 ? (max((arr_9 [i_2] [i_1]), ((3881138480496449563 - (arr_17 [i_5] [i_2] [i_2 - 1] [i_1] [i_2] [i_0]))))) : (arr_17 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0]));
                        arr_20 [i_2] [i_2] [i_2 + 2] [i_5] = (((var_4 + 2147483647) << (((var_4 + 194171606) - 20))));
                    }
                    var_15 = (max(var_15, ((((~8926) > (((arr_6 [i_0]) ? ((var_10 ? var_6 : (arr_13 [i_0] [i_1] [i_1] [i_2 - 1]))) : (((((arr_1 [i_1]) && (arr_16 [i_1] [i_1]))))))))))));
                }
            }
        }
    }
    #pragma endscop
}
