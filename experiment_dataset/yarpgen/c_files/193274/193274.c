/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 *= ((!(((var_12 ? var_3 : (min(var_10, var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0 - 1] [i_1] = ((~(min((max(-4603349822715975416, 1)), (arr_4 [i_0] [i_0])))));

                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    arr_12 [i_1] [i_1] [i_2 - 1] [i_0] = var_3;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_17 += (arr_6 [i_2] [i_3]);
                        arr_15 [i_0] [i_0] = ((13057391280474063589 < (((((1 ? 1 : -22260))) - (arr_3 [i_0])))));
                    }
                }
                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_18 += (max(var_14, (arr_0 [i_1 + 1])));
                                arr_24 [i_0] = (((min(((var_13 ? 1 : var_4)), (((arr_16 [i_0 + 1]) ? var_9 : (arr_17 [6]))))) == var_4));
                                arr_25 [i_0] [i_0] [i_0] [17] [i_4] [i_5] [i_0] = ((45043 || (~1)));
                            }
                        }
                    }
                    arr_26 [18] [i_0] [i_0] [i_1 - 1] = ((-(min((((var_9 ? (arr_10 [i_0]) : (arr_22 [i_0] [i_0] [i_1] [i_4] [i_4] [i_0])))), (((arr_13 [i_0] [i_1]) ? var_9 : (arr_5 [2] [16] [11])))))));
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    arr_30 [i_0] [i_1] [18] [i_1] = ((~(arr_27 [i_0])));
                    arr_31 [i_0] [i_1] [i_0] [i_7] = ((((1494471266 == ((var_6 >> (var_11 - 57485)))))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                arr_37 [i_0] = (~var_7);
                                var_19 = (max(var_19, var_7));
                                arr_38 [i_0] [i_0] [i_7] [1] [i_0] = (arr_6 [i_0] [i_1]);
                                var_20 = (max(var_20, -21905));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
