/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (~((-var_0 ? (((min(var_2, -31620)))) : 105639115)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = (((min(((((arr_0 [i_0] [i_0]) ? 120 : 65520))), -var_3))) ? (((arr_0 [i_0] [i_1]) ^ (((-7041 ? 4294967295 : 65509))))) : (max((min(var_5, var_1)), ((-(arr_0 [i_0] [i_2]))))));
                    arr_9 [i_2] [i_1] [i_2] |= (((arr_1 [i_2]) ? ((min((var_6 < var_1), -5328515326561805715))) : ((-((var_9 ? var_10 : (arr_1 [i_1])))))));
                }
            }
        }
    }
    var_13 = var_6;
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            {
                arr_15 [i_3] [11] = (((((((arr_13 [i_3] [i_4 - 1]) | var_6))) ? (~var_1) : ((~(arr_0 [i_3] [i_3]))))) & (((max((arr_10 [i_3] [i_4]), 2225598422990515430)) ^ ((-2225598422990515430 ^ (arr_1 [i_3]))))));
                arr_16 [i_3 - 1] [i_3 - 1] |= (((65497 ? (max(4203841074, 65522)) : (~var_3))));
                var_14 &= arr_14 [i_3] [i_4 - 1];
                arr_17 [i_3 + 1] [i_3 + 1] = -2225598422990515411;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                var_15 = (max(var_15, (((((max(((var_2 ? (arr_20 [i_5]) : var_3)), ((var_3 ? 1602103299 : (arr_20 [i_5])))))) ? ((((~var_3) ? (min(var_1, var_1)) : (!-22952)))) : (max((((var_4 ? var_3 : var_1))), ((-(arr_18 [i_6]))))))))));
                arr_23 [i_5] [i_5] = ((var_4 + (((min((!var_9), (arr_19 [i_5])))))));
            }
        }
    }
    #pragma endscop
}
