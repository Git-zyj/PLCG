/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 ^= ((((min(17390625969042446009, var_8))) ? ((((2596344099308835343 ? (arr_6 [i_1] [i_1 + 4] [i_1]) : -2596344099308835344)))) : ((((((arr_6 [i_0] [i_0] [1]) ? var_6 : (arr_0 [i_0] [i_1 + 2])))) ? ((min((arr_3 [i_1]), 4204234598))) : (((arr_6 [i_2 + 2] [14] [i_0 + 1]) ? var_18 : (arr_2 [i_0 + 1])))))));
                    arr_7 [i_2] [i_1 - 2] [4] [i_0] = (arr_1 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((var_2 ? 245 : -34476)))));
                                var_21 &= (-127 - 1);
                                var_22 = (max(var_22, ((min(76, (((arr_9 [i_0 - 1] [i_0] [i_1 - 1]) ? 65 : 55)))))));
                                var_23 = -32766;
                            }
                        }
                    }
                    var_24 = 90732698;
                }
            }
        }
    }
    var_25 = var_5;
    var_26 = ((~((((max(var_5, var_3))) ? var_15 : (min(90732684, 53248))))));
    #pragma endscop
}
