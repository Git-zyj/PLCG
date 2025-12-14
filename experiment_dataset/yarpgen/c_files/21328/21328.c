/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = -1383564941;
                arr_5 [i_0] = ((((((arr_2 [i_0]) ? 7168 : var_5))) ? -var_4 : (min(var_9, (2410858799 - -90)))));
            }
        }
    }

    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        var_17 = (((var_11 - (arr_6 [i_2]))));
        arr_8 [i_2] = ((~((1884108508 ? var_4 : 2979639496))));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    arr_17 [i_5] = (max(1969611363, 108));
                    arr_18 [i_5] [i_5] = ((!(((1884108497 ? (arr_13 [i_4] [i_5]) : (arr_13 [i_3] [i_3]))))));
                    arr_19 [i_3] [1] [10] [i_5] = (((min((~-86), 120))) ? ((-586255862 ? ((8 ? -1 : (arr_13 [i_3] [i_4]))) : var_11)) : (((arr_12 [i_3] [i_4] [i_3]) >> (((arr_12 [i_5] [i_5] [i_5]) - 909457403)))));
                    arr_20 [i_5] [2] [i_5] = (((arr_7 [10]) ^ var_5));
                    arr_21 [i_3] [i_3] [i_3] [i_3] &= (max(11188, (((-(arr_6 [i_3]))))));
                }
            }
        }
        arr_22 [i_3] = arr_9 [i_3];
        arr_23 [i_3] = var_6;
    }
    var_18 |= 6;
    var_19 = var_11;
    #pragma endscop
}
