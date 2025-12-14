/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((((arr_3 [i_0] [i_1]) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_0])))) ? ((min((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_0])))) : (arr_3 [i_1] [i_0])));
                arr_6 [i_1] = (((1533710984584205267 > 1533710984584205247) ? (arr_1 [i_0]) : 1533710984584205261));
            }
        }
    }
    var_13 = (-1 > 1);
    var_14 *= (((var_10 ? -var_11 : ((min(3, var_12))))));
    var_15 &= (min(var_11, (min(var_6, var_5))));
    var_16 = (((((min(var_12, -12746))) ? (max(var_3, -1533710984584205237)) : var_11)));
    #pragma endscop
}
