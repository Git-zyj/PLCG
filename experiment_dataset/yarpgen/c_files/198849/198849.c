/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max(((max(var_16, var_1))), (min(var_4, var_7))))) ? 4070627528 : 224339768));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~var_14);
        var_18 = ((var_13 ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_19 &= var_0;
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        arr_11 [i_1] [i_1 - 2] [i_2] = 4070627528;
                        arr_12 [i_1 - 2] [i_1] [i_3] = 49;
                    }
                }
            }
        }
        var_20 = (max((max((arr_7 [i_1 + 1] [i_1] [i_1] [i_1 + 1]), (arr_9 [i_1 - 2] [i_1] [i_1] [i_1 - 2]))), (max((min((arr_7 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1]), -139254971)), (((!(arr_7 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 2]))))))));
    }
    var_21 = (max((min(5243397009620357670, 12025)), var_11));
    var_22 ^= 224339768;
    #pragma endscop
}
