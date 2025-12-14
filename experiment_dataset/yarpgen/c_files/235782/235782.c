/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 8128;
    var_15 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = (((var_7 | (arr_2 [i_2]))));
                    var_17 = (min(var_17, ((((-(((!(arr_2 [i_2]))))))))));
                    var_18 = ((~((min((arr_1 [i_1] [i_2]), (min(var_6, 212)))))));
                    var_19 -= (min(((13 ? (arr_3 [i_0] [i_0]) : (arr_3 [i_2] [i_0]))), (64500 & 1)));
                }
            }
        }
    }
    var_20 *= (((((-(~var_11)))) ? (var_4 & var_10) : var_13));

    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_10 [i_3] [i_3] = ((var_6 ? 3584 : ((~(arr_9 [i_3])))));
        arr_11 [i_3] = ((((max(var_13, (782 && var_4)))) ? -1741634525 : ((var_8 ? (arr_7 [i_3] [i_3] [i_3]) : (max((arr_4 [i_3] [i_3]), 64500))))));
    }
    #pragma endscop
}
