/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (!var_1);
    var_13 = 4164882629;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_14 = (-(~227));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        var_15 = -775178647455489006;
                        arr_11 [i_0] [i_0] [i_3] [i_2] = 28;
                        var_16 = (min(var_16, 5449327420270278882));
                        var_17 = -9;
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        arr_15 [4] = 44691;
                        var_18 = -28;
                        var_19 = -3;
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        var_20 += -29296;

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            arr_21 [i_0] [11] [i_2] [i_5] [i_0] [i_6] = 0;
                            var_21 ^= 13;
                            arr_22 [i_0 - 1] [i_0] = -9637;
                        }
                    }

                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        arr_26 [i_0] [i_7] [i_0] [i_0 + 2] [i_0 + 3] = ((!(!154)));
                        var_22 = (max(var_22, 20838));
                        arr_27 [i_0] [15] [i_7] = -28;
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        arr_31 [i_0 + 2] [i_1] [i_2] = 0;
                        arr_32 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0] [i_0 + 1] = 1;
                        var_23 = 29184;
                    }
                    var_24 = (min(var_24, 1));
                    var_25 = (min(var_25, 245));
                }
            }
        }
    }
    #pragma endscop
}
