/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((-((((var_19 ? (arr_3 [i_1] [i_0] [i_0]) : (arr_3 [i_1] [i_0] [i_0]))) >> (((arr_5 [i_0 - 2] [i_0 + 1] [i_0 - 1]) - 2969062067))))));

                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    var_20 = ((((arr_10 [i_1]) << (11504 - 11478))) % (((min((min(58687, var_13)), (arr_4 [i_2] [i_0] [i_0]))))));
                    var_21 = ((((((var_18 / var_16) < (arr_9 [i_2] [i_2 + 1] [i_2 - 1] [i_0 + 1])))) < ((~((min((-127 - 1), 58676)))))));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_22 *= ((~-9223372036854775803) ? 3596147397 : 54032);
                    arr_14 [i_3] [i_1] [i_0] = (arr_11 [i_3] [i_1] [i_0]);
                    var_23 = (min(var_23, (arr_11 [i_3] [i_1] [i_0])));
                }
                var_24 = 384215948;
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_24 [i_5] = (((arr_18 [i_7 - 2] [i_7 - 3] [i_7 - 3]) / 23341));
                        arr_25 [i_7] [i_5] [i_4] [i_5] [i_4] = (((arr_18 [i_7 + 2] [i_6 + 1] [i_5 + 2]) + (arr_18 [i_7 - 1] [i_6 + 1] [i_5 + 2])));
                    }
                }
            }
            var_25 = (((((11883 >> (((arr_17 [i_5] [i_4]) - 36234))))) ? 64309 : -var_12));
            arr_26 [i_5] = (arr_20 [i_4 + 2]);
            var_26 = (((arr_19 [i_5 + 2] [i_5 + 2] [i_4 - 2]) & (arr_19 [i_5 + 2] [i_5 + 1] [i_4 + 2])));
        }
        arr_27 [i_4 + 2] [i_4] = var_2;
        var_27 = var_10;
    }
    var_28 = var_6;
    #pragma endscop
}
