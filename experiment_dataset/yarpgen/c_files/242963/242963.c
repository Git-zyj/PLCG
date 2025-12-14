/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [2] |= (((((var_11 ? (min(59810, var_9)) : var_6))) & ((((min(0, var_11))) ? (max((arr_4 [i_3] [i_2]), 11085856758518223249)) : (arr_10 [i_0] [i_0] [i_3 - 1] [i_2 + 1] [i_1 + 1] [i_2 - 3])))));

                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            var_12 = (min(var_12, ((((arr_9 [i_4 + 1] [i_4 - 2] [i_3 - 1] [i_1 - 3]) / (min(var_4, (arr_5 [i_4 - 1] [i_4] [0]))))))));
                            var_13 = (((((var_1 % (arr_7 [i_2] [i_2 - 2] [i_2])))) ? ((var_6 & (max(18446744073709551615, (arr_7 [i_2] [i_0] [i_2]))))) : ((((arr_8 [i_1] [7]) - (max((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_9)))))));
                            var_14 = -342650216;
                        }
                        var_15 = var_1;
                    }
                    arr_15 [i_0] [i_1] [i_2] [i_2] = ((!((max((((arr_0 [i_2]) - (arr_3 [i_0] [i_0]))), ((max(var_9, 89))))))));
                }
            }
        }
    }
    var_16 = (min(6, var_5));
    var_17 = var_3;
    #pragma endscop
}
