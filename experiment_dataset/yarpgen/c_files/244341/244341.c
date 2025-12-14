/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min(var_13, (var_6 && var_3)))) ? var_1 : (((var_10 && var_10) / (max(2046318396, var_1))))));
    var_15 = (((max(((var_6 ? var_11 : var_1)), ((max(var_1, var_3))))) < var_4));
    var_16 += ((((max((!2088960), var_0))) || var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 = ((!((((arr_1 [i_0] [i_1]) ? (arr_7 [i_0] [i_1]) : (arr_7 [i_0] [i_1]))))));
                    var_18 = (arr_5 [13]);
                    var_19 = (min(var_19, -8));
                    var_20 += ((!((min((min((arr_2 [i_2] [i_2]), (arr_8 [12] [i_1] [1] [i_0]))), (arr_4 [i_0] [10]))))));
                    var_21 = (min(var_21, (~-8)));
                }
            }
        }
    }
    var_22 = (max(var_22, (((var_0 ? var_7 : var_4)))));
    #pragma endscop
}
