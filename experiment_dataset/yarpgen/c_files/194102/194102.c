/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = var_11;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_15 = (!var_11);
                        var_16 = (var_12 > var_7);
                        arr_10 [i_0] [i_0 + 1] [i_3] [4] [i_0] = (((var_11 <= -5233860915743819183) / 11));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_17 = 6;
                                arr_16 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_4 - 4] [i_5] = var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(var_18, -5233860915743819183));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((max(var_13, (~var_4))))));
                                var_20 = (+((var_3 / (((arr_23 [i_6]) ? -5233860915743819183 : (arr_27 [0] [i_9] [i_8] [i_7] [i_6]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 21;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            {
                                var_21 = (((((~(!var_13)))) ? (((((min(1, 1))) <= var_11))) : var_2));
                                var_22 -= (min((((4226856630 <= (arr_36 [i_11 - 3])))), (min(-2147483628, 3457158912336708994))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
