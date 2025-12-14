/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(((~var_15) + var_16))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_19 -= ((!(arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (arr_4 [i_0 - 1]);
                    var_21 = (max(((max((arr_5 [i_0] [i_0]), (arr_5 [i_0] [i_0])))), ((var_7 ? var_7 : (arr_5 [i_0] [i_0])))));
                }
            }
        }
        var_22 = (max(var_22, (((1780154574768939613 ? (((-(arr_5 [i_0 - 1] [12])))) : ((((-(arr_4 [i_0]))) / -191818820)))))));
    }
    var_23 = (-13973 - 2473351297919550581);
    var_24 = (max(((19 ? (((var_0 ? var_17 : var_2))) : ((0 ? var_7 : 0)))), (((var_11 & var_7) - (!var_0)))));
    #pragma endscop
}
