/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_13 = ((((max(0, 57658))) && ((max(1, (arr_2 [i_1] [i_1 + 2]))))));
                var_14 = (max(var_14, (((((var_11 ? (arr_0 [i_1 + 2] [i_1 - 1]) : (arr_0 [i_1 + 1] [i_1 + 2]))) % ((-1 ? -1789375713 : (0 * 1))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_15 = ((7878 | ((((((14896946572750718076 ? var_9 : var_2))) && 1)))));
                            var_16 = (((((var_6 ? (var_11 - -30) : ((min(1, -12)))))) && (((1 * ((var_6 ? 86 : 371112405)))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_17 = (max((min((arr_11 [i_6] [i_1 + 2] [3]), (max(75, var_12)))), ((-3 * (((arr_11 [1] [i_1] [i_1]) % 47679))))));
                                var_18 = var_10;
                                var_19 = var_6;
                                var_20 = (~(max((arr_4 [i_5] [i_5] [i_4 - 1] [i_6]), (arr_2 [i_0] [0]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 |= (((((var_3 ? var_5 : (min(var_1, var_7))))) ? (((max(-5, 1)) * (7877 % var_12))) : (~var_6)));
    var_22 = (max(var_22, var_7));
    var_23 = (max(((~(1 | var_7))), ((min((var_4 || var_1), (!var_4))))));
    #pragma endscop
}
