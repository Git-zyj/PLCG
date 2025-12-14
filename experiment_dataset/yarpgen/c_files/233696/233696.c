/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_15 = (~var_13);
        var_16 = (min(var_16, (arr_1 [9])));
    }
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_17 = (arr_4 [i_3] [i_3]);

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_18 ^= var_13;

                        for (int i_5 = 3; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            var_19 = (max(16646896087405410306, 16646896087405410306));
                            arr_16 [i_1] [i_2] [6] [10] |= -15315;
                            arr_17 [13] [i_4] [i_4] [i_4] [i_2] [i_1] [i_1 + 1] = (arr_3 [i_1]);
                            var_20 = ((((max(((var_4 ? (arr_11 [0] [3] [i_3] [i_2]) : 1)), 29453))) ? var_4 : -16044));
                        }
                        for (int i_6 = 3; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_1] [i_1] [i_3] [i_4] [i_4] [i_4] = (21 > 1);
                            var_21 = -var_5;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    var_22 = (max(var_22, ((((((16646896087405410314 ? 155 : 1))) ? (((((16646896087405410314 ? 33138 : -58))) ? (arr_7 [i_8]) : (arr_18 [i_7] [i_8] [i_9]))) : (!var_6))))));
                    var_23 = (max((((!(arr_24 [i_9] [i_9])))), ((var_0 - ((var_2 ? (arr_21 [15] [i_7]) : (arr_21 [i_7] [i_7])))))));
                }
            }
        }
    }
    var_24 = ((((min(var_10, ((var_2 ? var_2 : var_11))))) ? var_0 : ((-var_13 ? ((var_10 ? var_12 : var_5)) : 21))));
    #pragma endscop
}
