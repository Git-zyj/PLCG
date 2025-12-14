/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 = (max(var_2, var_9));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_12 = (max(var_12, var_8));
                            var_13 += var_0;
                        }
                    }
                }
            }
            var_14 = var_2;
            /* LoopNest 3 */
            for (int i_5 = 3; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_15 = (max((max(var_7, var_9)), var_3));
                            var_16 = var_7;
                            var_17 -= var_6;
                            var_18 = (max(var_3, (max(var_0, var_6))));
                        }
                    }
                }
            }
            var_19 = var_3;
        }
        for (int i_8 = 1; i_8 < 9;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 0;i_10 += 1)
                {
                    {
                        var_20 &= (min(((max((max(var_9, var_0)), var_3))), (max((max(var_6, var_5)), ((max(var_4, var_0)))))));
                        var_21 = (min(var_6, var_5));
                        var_22 = var_7;
                    }
                }
            }
            var_23 = var_3;
        }
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            var_24 = (min((min((max(var_9, var_7)), ((max(var_3, var_9))))), var_8));

            for (int i_12 = 3; i_12 < 9;i_12 += 1)
            {
                var_25 = var_2;
                var_26 = var_4;
                var_27 = var_8;
            }
        }
        var_28 += var_1;
        var_29 = var_9;
    }
    var_30 = var_3;
    #pragma endscop
}
