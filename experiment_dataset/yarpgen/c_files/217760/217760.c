/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_0] = (i_0 % 2 == zero) ? ((((((((var_13 ? 177124306 : (arr_4 [23] [7] [i_1])))) ? 1380807237 : var_7))) - (min((((var_0 % (arr_0 [i_0])))), ((~(arr_2 [i_0] [i_0]))))))) : ((((((((var_13 ? 177124306 : (arr_4 [23] [7] [i_1])))) ? 1380807237 : var_7))) - (min((((var_0 * (arr_0 [i_0])))), ((~(arr_2 [i_0] [i_0])))))));
                var_15 = -17176;
            }
        }
    }
    var_16 = (max(var_16, (((((((max(14032746031262364266, var_1)) / var_1))) ? var_7 : (((max(14032746031262364249, 1)))))))));
    var_17 = var_11;
    #pragma endscop
}
