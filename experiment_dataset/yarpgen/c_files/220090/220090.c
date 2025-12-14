/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 -= -var_2;
                                arr_12 [i_0] [i_1 + 2] [i_0] [i_1 + 2] [i_4] = (max((var_3 || var_13), var_0));
                                arr_13 [i_4] [1] [i_4] [i_0] [11] = (((min((((127 ^ (arr_6 [i_0] [i_2] [i_0])))), 1147860711)) << ((min((((1147860711 != (arr_0 [i_0])))), var_9)))));
                                var_16 = (((var_4 ? ((~(arr_11 [i_0] [i_0] [i_2] [i_3] [i_4]))) : -6)));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((((((arr_7 [i_0] [i_1] [i_1] [i_2]) ? ((3147106584 ? -11 : 2187575448828919999)) : (((((arr_5 [i_0] [i_0] [i_2]) == var_11))))))) ? ((((min(var_0, 2656887938724676335))) ? (1370358192 >> 1) : 1147860711)) : ((max(((-15 ? 43793 : (arr_1 [i_2]))), (!var_11))))));
                    var_17 = ((((((arr_5 [i_0] [i_0] [i_2]) ? (((arr_3 [i_0]) + var_8)) : ((var_0 ? var_7 : var_6))))) ? ((((arr_7 [i_1 + 1] [i_2] [4] [i_2]) ? var_12 : (arr_7 [i_1 + 1] [i_1] [i_1] [i_1])))) : ((12262 ? var_0 : var_10))));
                }
            }
        }
    }
    var_18 ^= max(((1264859060 ? var_7 : (var_9 + var_4))), ((var_9 ? (var_10 < var_3) : (max(var_4, var_7)))));
    var_19 = var_11;
    #pragma endscop
}
