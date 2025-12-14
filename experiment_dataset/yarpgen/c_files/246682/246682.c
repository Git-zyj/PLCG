/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 = (((((((var_5 >> (((arr_1 [7]) - 6744)))) % (arr_1 [i_0])))) || var_9));
        var_12 *= var_0;
        var_13 -= (min(992, (max(var_3, ((-1866521590 ? 45 : 4294967280))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_14 -= min((min(-1866521590, (arr_4 [i_0]))), (arr_4 [i_0]));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_15 += ((+(((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_1] [i_2] [i_4])))));
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] |= (arr_15 [i_0] [i_1] [i_2] [i_3] [i_4]);
                            arr_18 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] [14] = ((((~((14948761178292776504 ? 22 : (arr_5 [i_0]))))) < var_9));
                            arr_19 [i_3] [i_1] = ((((((arr_9 [i_0] [i_3] [i_0] [i_0] [10] [i_0]) > (arr_9 [i_0] [i_3] [i_2] [12] [i_3] [i_4])))) ^ ((-(arr_9 [i_4] [i_3] [i_0] [i_2] [i_3] [i_0])))));
                            var_16 += (max((~-1866521577), (((!var_0) * 22))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_17 += -1746804951;
                            var_18 = 16;
                        }
                    }
                }
            }
        }
        arr_22 [i_0] = -var_5;
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_19 -= (min(64394, ((~(arr_24 [i_6])))));
        var_20 = (((arr_23 [i_6]) % var_3));
    }
    var_21 = (max(var_21, var_1));
    #pragma endscop
}
