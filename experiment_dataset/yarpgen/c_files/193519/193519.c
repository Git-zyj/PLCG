/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_20 |= ((-1 | ((((!(arr_0 [i_0 + 1])))))));
                arr_5 [i_0 - 1] [16] |= (arr_1 [i_0 + 3]);
            }
        }
    }
    var_21 = (min(var_3, var_4));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        {

                            for (int i_6 = 3; i_6 < 9;i_6 += 1)
                            {
                                arr_18 [i_2] [i_2] [10] [10] [i_4] [8] [i_6] = 1;
                                arr_19 [9] [10] [i_2] [9] = (max(((800 >> (((arr_13 [i_2] [3] [i_2 + 1] [i_2]) - 99)))), (arr_13 [i_2 + 1] [9] [i_2 + 1] [i_2])));
                                var_22 += var_11;
                                var_23 -= ((!((!(arr_14 [i_2] [i_3] [i_6 - 2] [1])))));
                            }
                            arr_20 [i_2] = (20157 || 432);
                            var_24 -= (0 % (min((arr_12 [i_5 - 1] [i_5 - 1] [i_2 - 2] [i_3 - 1]), 31)));
                        }
                    }
                }
                arr_21 [i_2] = var_16;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_25 -= (max(var_8, (arr_27 [i_7] [11] [i_9] [i_10])));
                            var_26 = (min(var_26, (((+((max((min((arr_28 [16] [1] [16] [15]), var_4)), (max((arr_27 [i_7] [17] [i_7] [i_10 + 1]), var_9))))))))));
                        }
                    }
                }
                var_27 = (min(var_27, var_19));
            }
        }
    }
    var_28 = (min(var_6, ((min(-32, -1)))));
    #pragma endscop
}
