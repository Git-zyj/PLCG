/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_12 &= ((-(max((((arr_2 [i_1]) ? var_6 : var_9)), (~var_1)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_2] [i_1] [i_0] = (max((((!(arr_0 [i_0] [i_0])))), ((var_0 * (((!(arr_6 [i_0]))))))));
                            var_13 = (max(var_13, (min(var_2, var_0))));
                        }
                    }
                }
                var_14 += (var_10 ^ var_10);
                var_15 = arr_3 [i_0];
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_16 = (!-22295238);
                            var_17 = (max(var_17, var_10));
                            var_18 = (((((-(var_3 * var_4)))) ? var_2 : (arr_1 [i_1] [i_1])));
                            var_19 = (min(var_19, ((((((var_3 ? -var_5 : (arr_1 [i_5] [i_1])))) ? var_5 : ((((((arr_14 [i_0] [17] [i_4] [17] [i_5]) ? var_0 : (arr_13 [i_0] [i_5])))) ? (var_10 / var_9) : (((arr_3 [18]) ^ var_4)))))))));
                        }
                    }
                }
            }
        }
    }
    var_20 = (max(var_20, (var_3 + var_10)));
    #pragma endscop
}
