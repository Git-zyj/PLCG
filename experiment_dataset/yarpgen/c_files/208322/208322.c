/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [1] [i_2] [i_3] = (arr_3 [i_0] [i_0]);
                            arr_12 [17] [17] [i_0] [i_3] = var_6;

                            for (int i_4 = 2; i_4 < 18;i_4 += 1)
                            {
                                arr_16 [i_1] [i_0] = (arr_9 [i_4 - 1] [i_4]);
                                var_13 = (min(var_13, (((!(arr_6 [i_3] [i_3]))))));
                                arr_17 [i_0 + 2] [i_0] [i_2] [i_3] = (((!1346246188) - (arr_13 [i_2 + 1] [i_2 + 1] [i_4 - 1] [4] [i_0 + 3] [i_1])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        {

                            for (int i_7 = 0; i_7 < 19;i_7 += 1)
                            {
                                var_14 &= var_3;
                                var_15 = (!(10 + var_5));
                                arr_25 [i_0] [i_0] [1] [i_0] = ((((arr_21 [i_0] [16] [i_0] [i_6 - 1]) && ((var_3 >= (arr_14 [i_0] [1] [i_5 - 2] [1] [1]))))));
                                arr_26 [i_0] [1] [i_5 + 1] [i_1] [i_0] = (~var_8);
                                var_16 = (min(var_16, (arr_6 [i_5] [i_5])));
                            }
                            var_17 = (((((arr_22 [10] [i_1] [0]) | (arr_21 [18] [0] [i_0] [i_6]))) << (var_7 - 13323511447364799733)));
                        }
                    }
                }

                /* vectorizable */
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    arr_31 [i_0] [i_0] [i_1] [i_0] = ((!(arr_9 [i_0 + 2] [i_0 + 1])));

                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        arr_34 [i_0] [i_1] [0] [i_0] = (arr_6 [i_0] [i_0]);
                        arr_35 [i_1] [i_1] [13] [i_0] [16] [11] = (arr_10 [i_0 + 2] [i_0 + 3] [i_9 - 1] [i_9 + 2]);
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        arr_39 [i_0] [i_0] [i_8] [i_10] [i_8] = var_6;
                        arr_40 [i_0] [i_0] [i_8] [i_10] = (arr_18 [i_0] [i_8] [i_0]);
                    }
                }
                var_18 |= ((-((((arr_22 [i_0] [i_0 - 1] [i_0 + 4]) != (arr_22 [i_0 + 3] [6] [i_0 + 3]))))));
            }
        }
    }
    var_19 = (max(var_19, var_6));
    var_20 = (var_2 % var_9);
    #pragma endscop
}
