/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((var_16 << (((((min(((max(var_1, var_5))), (~var_9))) + 6175)) - 3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = var_12;
                    arr_8 [i_0] &= ((((!((max(0, 28))))) ? (max((max((arr_1 [i_1] [i_1]), (arr_3 [i_0]))), (((arr_6 [i_0] [i_1] [i_2]) ? (arr_6 [i_0] [i_0] [i_0]) : 255)))) : ((((255 == (arr_0 [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] = (((((~((var_13 ? 255 : (arr_0 [i_0])))))) ? (((255 == 255) ? ((1 ? 241 : 0)) : (!var_3))) : ((-((0 ? (arr_9 [i_0] [i_1] [i_2] [4] [i_4] [9]) : var_10))))));
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_4] = ((-(((max((arr_1 [i_2] [12]), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))) & (((arr_11 [i_0]) ? (arr_3 [i_0]) : 63))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((-((var_4 ? var_1 : var_9))));
    #pragma endscop
}
