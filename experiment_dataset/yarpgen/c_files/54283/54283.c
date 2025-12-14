/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_12 += (((((arr_0 [i_0]) ? -var_4 : -111)) ^ (((var_0 ? (arr_2 [i_0]) : ((-(arr_0 [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_1] [i_3] = var_0;
                            var_13 = ((-(arr_0 [i_2 + 2])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            {

                for (int i_6 = 3; i_6 < 9;i_6 += 1)
                {
                    var_14 ^= (~1783840237);
                    var_15 = 85;
                }
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    var_16 = var_3;
                    var_17 = (max((~111), var_10));
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((max(549755813887, ((max(31341, 63))))))));
                                var_19 = (max((((!(arr_26 [i_4 - 1] [i_5 + 1] [i_10 - 3])))), (((arr_26 [i_4 - 1] [i_5 + 2] [i_10 + 1]) ? (arr_26 [i_4 - 1] [i_5 + 1] [i_10 - 3]) : var_4))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
