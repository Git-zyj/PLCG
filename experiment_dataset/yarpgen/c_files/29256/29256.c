/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((max((var_6 & var_3), var_8))), var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = 1215245585;

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_13 = (((arr_1 [i_0]) / (arr_3 [i_0] [i_1])));

            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                var_14 = ((((-(arr_2 [i_0] [i_0]))) * (0 && 8482920848972974212)));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_15 = 65535;
                            var_16 = (((arr_9 [i_3 + 3] [i_2 - 3] [i_2 - 1] [i_2 - 3]) / var_10));
                            arr_13 [i_0] [i_2] = 4;
                        }
                    }
                }
                arr_14 [i_0] [i_1] [i_1] [i_0] = var_7;
                arr_15 [i_0] [i_0] [i_2] [i_0] = (arr_2 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_17 = var_7;
                            arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] = var_7;
                        }
                    }
                }
            }
            var_18 = var_8;
        }
        for (int i_7 = 3; i_7 < 16;i_7 += 1)
        {
            var_19 ^= (arr_23 [i_0] [i_7 - 1]);
            var_20 = var_1;
        }
        var_21 += (((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) < 72));
    }
    #pragma endscop
}
