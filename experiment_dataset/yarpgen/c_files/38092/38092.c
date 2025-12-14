/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min((((max(var_17, var_15)))), (max(var_9, (min(var_2, var_3)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = (max(var_19, (arr_1 [12])));
        var_20 = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_21 &= min((max(var_9, -3)), (arr_4 [i_4] [i_1]));
                            var_22 = (min(var_22, (arr_12 [i_4] [i_1] [i_2] [i_3])));
                        }
                    }
                }
            }
            var_23 = (min(((min((max(0, -311031022)), var_8))), var_15));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_24 *= (arr_6 [i_0] [i_0] [1]);
            arr_16 [i_0] [i_0] = (min((min((max(var_7, (arr_14 [i_0] [i_0] [i_0]))), ((max(21772, -21784))))), (arr_0 [i_0])));
            arr_17 [i_5] &= (max(-639201508, 21770));
        }

        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_25 = (arr_19 [i_0] [i_6]);

            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                arr_22 [i_7] = min((arr_11 [i_7] [i_6] [i_0] [i_0]), ((min((arr_2 [i_0] [i_7] [i_7]), (arr_11 [i_7] [i_6] [i_0] [i_0])))));
                arr_23 [18] [18] [i_6] [i_7] = var_6;
                arr_24 [i_0] [i_6] [i_7] = var_0;
            }
        }
        for (int i_8 = 2; i_8 < 18;i_8 += 1)
        {
            arr_27 [i_8 - 1] = (arr_6 [i_0] [i_0] [i_0]);
            var_26 = (min((arr_7 [i_8]), (min((min((arr_2 [i_8] [i_8] [i_0]), (arr_20 [i_0] [i_0] [i_8] [i_0]))), (arr_15 [12] [i_0])))));
        }
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            arr_32 [i_9] [i_9] [i_0] = var_6;
            arr_33 [i_0] [i_9] = (min(((max((min((arr_19 [i_0] [i_0]), (arr_30 [i_0] [i_9] [i_9]))), var_7))), (max(((min(-639201495, -75))), (arr_2 [i_9] [i_9] [i_0])))));
        }
    }
    var_27 = var_10;
    var_28 = var_10;
    #pragma endscop
}
