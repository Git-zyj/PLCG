/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_1] [i_2] [i_2] = (((arr_0 [i_1]) || (arr_8 [i_2] [i_1] [i_2] [6])));
                                arr_16 [i_2] [i_3] [i_2] [i_2] [14] [i_0] [i_2] = var_0;
                            }
                        }
                    }
                    arr_17 [i_2] = ((((arr_3 [i_0] [i_1] [i_2]) | (arr_3 [i_2] [i_0] [i_0]))) ^ ((var_5 ? (arr_12 [i_2] [i_2] [i_2] [i_0]) : (arr_12 [i_0] [i_2] [i_2] [i_2]))));

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_22 [i_2] [i_5] = ((((((5897143870716100266 ^ 6616) ? (var_2 == 1624645539) : 97))) * 5897143870716100266));
                        var_12 = ((max(var_2, var_4)));
                    }
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        var_13 = ((((arr_19 [i_6] [i_6] [i_6 + 1] [i_6 + 1] [i_6]) != (arr_14 [i_6 + 1] [i_6] [i_6 + 1] [i_6 - 1] [i_6 + 1]))));
                        var_14 = (~113);
                        var_15 *= var_5;
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_16 |= var_11;
                        var_17 = (min(var_17, (arr_0 [i_0])));
                        arr_29 [i_0] [17] [i_2] [i_2] = ((~(max((arr_7 [i_1]), (arr_7 [i_0])))));
                    }
                }
            }
        }
    }
    var_18 = var_6;
    #pragma endscop
}
