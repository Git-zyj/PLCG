/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_2, 15220));
                                var_19 = (((((var_0 + (arr_11 [i_3] [i_3] [i_3] [i_3] [i_1 - 1])))) ? 1 : ((var_10 ? (arr_13 [i_1 - 2] [i_2 + 1] [i_2 + 1]) : var_2))));
                            }
                        }
                    }
                    arr_14 [9] [17] [17] [9] = (min(-1, 30));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_20 ^= 26;
                                var_21 = (max(((min(-var_17, -12))), ((((arr_0 [i_5] [i_6]) - var_2)))));
                                var_22 ^= (~-1);
                                arr_20 [i_0] [i_0] = (max(((min((~-1), (arr_17 [17] [i_1] [i_2] [i_5] [i_5] [17])))), (var_11 + -var_3)));
                            }
                        }
                    }
                    arr_21 [i_0] [i_0] [2] [13] = (!var_11);
                    var_23 = 1082328257215876011;
                }
            }
        }
    }
    var_24 = var_15;
    var_25 = (32768 * 3);
    #pragma endscop
}
