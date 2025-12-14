/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = -117;
                                arr_15 [i_0] = (((arr_5 [i_0] [i_0] [i_0] [i_0]) ? var_0 : (((!((((arr_12 [16] [i_1] [18] [i_1] [i_1]) / -256))))))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_0] [i_0] = (((((var_1 ? var_10 : 24576))) ? (arr_9 [i_0] [i_1] [i_1] [10]) : (arr_11 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2])));

                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = 0;
                            var_18 &= (arr_1 [i_6]);
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_5 - 3] [i_0] [i_6] = (arr_18 [i_0] [i_1] [i_2] [0] [16]);
                            var_19 -= (arr_4 [i_1] [1]);
                        }
                        for (int i_7 = 1; i_7 < 20;i_7 += 1)
                        {
                            var_20 = var_7;
                            var_21 = ((-(((((max((arr_23 [i_5]), (arr_26 [i_0] [i_0] [i_2] [i_2])))) || 0)))));
                            var_22 = 1;
                            arr_30 [2] [i_1] [i_0] [i_5] [i_0] = (arr_18 [i_0] [i_1] [i_2] [i_1] [i_7]);
                            var_23 = var_12;
                        }
                        arr_31 [i_0] [i_1] [i_0] [i_5 - 1] = arr_21 [i_0] [17] [i_1] [i_2] [17];
                    }
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        arr_34 [i_2] [i_2] [i_0] [i_2] [i_2] [i_2] = ((~(arr_6 [i_0] [i_1] [i_1] [8])));
                        arr_35 [i_0] [i_2] = var_4;

                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            var_24 |= 0;
                            var_25 = var_5;
                        }

                        for (int i_10 = 2; i_10 < 21;i_10 += 1)
                        {
                            var_26 += ((-(((!(arr_33 [20] [i_10] [20] [i_8]))))));
                            var_27 = (max(var_27, var_1));
                            arr_41 [i_0] [i_0] [i_0] [i_8] [i_8] [i_8] [i_8 - 1] = -1301362009;
                        }
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            var_28 = (min(var_28, 0));
                            var_29 = (min(var_29, (arr_28 [i_0] [i_1] [i_2] [i_8 - 1] [i_1])));
                            var_30 = (max(var_30, (((-(!1))))));
                            arr_44 [i_0] [i_1] [i_1] [i_1] [i_1] = (!9);
                            arr_45 [i_8] [i_1] [i_0] = 1;
                        }
                        arr_46 [i_0] [i_0] [i_2] [i_8] = (min(16586780312199719667, 1));
                    }
                }
            }
        }
    }
    var_31 = 0;
    #pragma endscop
}
