/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_11));
    var_14 = (max(2552963527, 1469348372));

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_15 -= (3319702037198259336 != var_8);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = (max((((arr_3 [i_2]) - (arr_3 [i_1]))), (arr_1 [i_0 - 1] [i_0 - 1])));
                    var_17 = (max(var_17, (((+((((((arr_8 [6] [6] [i_1] [i_2]) ? 3319702037198259336 : var_7))) ? (arr_6 [i_0] [i_0 + 1]) : var_0)))))));
                    var_18 = (max((arr_6 [i_0 - 1] [i_0 + 1]), (arr_6 [i_0 - 1] [i_0 - 1])));
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_19 = (min(var_19, (((var_10 & (((((arr_9 [i_3 + 2]) != var_7)))))))));
        var_20 *= (((min((arr_11 [i_3 - 1] [i_3 - 1]), (min(var_0, var_5)))) % var_6));
        var_21 = (((((var_8 & ((var_1 ? var_8 : (arr_9 [i_3])))))) ? ((((arr_3 [i_3 + 1]) ? var_8 : (arr_9 [i_3])))) : ((max((arr_2 [i_3] [i_3] [i_3]), var_12)))));
    }
    var_22 = ((15127042036511292280 ? (((var_1 ? (((var_8 ? var_1 : var_9))) : var_12))) : ((-((0 ? 15127042036511292258 : 46))))));
    #pragma endscop
}
