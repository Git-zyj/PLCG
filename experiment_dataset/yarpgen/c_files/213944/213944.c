/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = ((7481 ? 38970 : ((~(max(7493, (arr_4 [i_0])))))));
                var_14 = (-(!var_5));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_15 = (min(var_4, ((((~var_11) * ((var_0 ? var_12 : 15)))))));
                var_16 = (max(((-(max((arr_8 [i_2]), (arr_6 [i_2]))))), -7483));
                var_17 = (max(1419833309188173920, var_7));
                arr_13 [i_2] [i_2] = (((!var_1) ? ((((((arr_10 [i_2]) / var_6))) ? (max(26566, 0)) : (((var_6 ? var_11 : var_12))))) : (((!var_4) ? 15678833597578040437 : (var_7 || var_0)))));
            }
        }
    }
    var_18 = var_5;
    #pragma endscop
}
