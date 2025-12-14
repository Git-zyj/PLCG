/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_21 -= ((max(var_16, var_1)));
        var_22 = (max(-897262070, (max((arr_1 [i_0]), var_19))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = 1417885865;
        var_23 = 897262055;
        var_24 += (arr_2 [i_1] [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_13 [i_2] [3] [3] [i_4] = -897262070;
                        var_25 = -897262078;

                        for (int i_5 = 2; i_5 < 23;i_5 += 1)
                        {
                            arr_16 [i_2] [i_4] = var_9;
                            arr_17 [i_1] [i_1] [i_2] = 1417885874;
                            var_26 = var_14;
                            var_27 = 35984;
                        }
                        var_28 = (arr_15 [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2]);
                        arr_18 [i_1] [i_2] = -6867821870508678259;
                    }
                }
            }
        }
        arr_19 [i_1] = 135107988821114880;
    }
    #pragma endscop
}
