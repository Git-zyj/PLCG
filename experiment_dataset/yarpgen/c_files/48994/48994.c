/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_18 = ((~((~((0 ? 6200572328821812659 : var_9))))));
                            var_19 = (!var_12);
                            var_20 ^= ((~(min((arr_7 [i_3 - 1] [i_1 - 4] [i_1 - 4] [i_0]), ((-(arr_2 [i_0] [i_0])))))));
                            var_21 = var_4;
                        }
                    }
                }
                arr_9 [i_0] = (max((arr_6 [i_1 - 4] [1] [i_1 - 3] [i_1 + 2] [1] [i_1 - 4]), (-var_8 - var_11)));
                var_22 = (min((((((var_16 - (arr_3 [i_0])))) ? -38304 : (arr_2 [i_1] [6]))), (((var_17 ? (arr_0 [i_0 - 3]) : ((0 ? var_5 : (arr_7 [i_1 - 3] [i_1 + 2] [i_1] [i_0]))))))));
                var_23 = min(var_16, ((((((arr_3 [i_0 - 2]) ? 4172165453 : (arr_8 [3])))) ? (((((arr_6 [i_0] [i_1 - 1] [i_0 + 1] [13] [i_0] [i_1]) >= 1)))) : (min(var_12, var_2)))));
            }
        }
    }
    var_24 = (var_7 <= var_16);
    var_25 = (max(var_25, ((((((((var_15 ? var_7 : 1670124211))) ? var_1 : ((var_7 ? var_17 : var_4)))) >= (((max(var_9, (!2624843084))))))))));
    var_26 *= (var_0 < var_15);
    #pragma endscop
}
