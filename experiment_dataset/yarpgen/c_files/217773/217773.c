/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (min((((var_14 + 2147483647) << (((var_13 + 24726) - 4)))), var_6));
    var_16 *= var_13;
    var_17 = (var_13 + var_2);

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_18 = (min(var_18, ((((min(var_6, ((max(var_5, var_6))))) & ((max(var_12, var_9))))))));
        arr_4 [i_0] = var_10;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_1] [1] = ((max(var_9, var_8)));
            var_19 *= var_1;

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_20 |= (-3491438693165905626 >= -15);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_21 |= var_2;
                            var_22 = (max(var_22, var_13));
                        }
                    }
                }
                arr_15 [i_1] = (max(var_13, ((var_5 >> (var_4 - 51)))));
                var_23 = var_11;
            }

            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                arr_18 [i_1] [i_1] [1] = (var_3 <= (var_12 * var_0));
                arr_19 [i_1] = var_0;
            }
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                arr_23 [i_1] [i_1] [i_6] = var_14;
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_24 = (min((min(873784901935356788, -5054)), ((max(86, (min(0, 3228778117)))))));
                            arr_28 [i_1] [i_1] = (var_8 | var_3);
                            arr_29 [i_0] [i_1] [i_0] [i_7] [6] [i_8] [i_1] = (((((min(0, 7)))) == (max(2521913883987279470, ((min(1, 117)))))));
                        }
                    }
                }
                var_25 = (min(var_25, (((max(var_7, var_2))))));
                var_26 = (((var_1 > var_13) ^ var_0));
            }
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                var_27 = var_4;
                arr_34 [i_1] = var_10;
            }
            for (int i_10 = 2; i_10 < 14;i_10 += 1)
            {
                var_28 = (max(((max(var_3, var_10))), var_12));
                var_29 = (min(var_29, (min(var_13, var_11))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 0;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        {
                            arr_45 [9] [5] [i_1] = (min(var_14, var_2));
                            arr_46 [i_10] [i_11 + 1] [i_1] = (min(var_5, var_9));
                        }
                    }
                }
                var_30 *= (min(var_11, (min(var_11, var_12))));
            }
        }
        for (int i_13 = 2; i_13 < 12;i_13 += 1)
        {
            arr_49 [i_0] = (min((min(32741, (-127 - 1))), ((max((var_3 != var_10), var_11)))));
            arr_50 [i_0] [i_0] [i_13] = var_6;
        }
    }
    for (int i_14 = 1; i_14 < 15;i_14 += 1)
    {
        arr_53 [i_14] [i_14] = (max((var_11 & 2884516586344428206), (min(var_3, var_2))));
        arr_54 [i_14] [i_14] = ((((max((48 && 49), (var_12 >= var_2)))) * var_1));
    }
    var_31 = ((max(((min(-2521913883987279470, -2521913883987279452))), 4098780623981252270)));
    #pragma endscop
}
