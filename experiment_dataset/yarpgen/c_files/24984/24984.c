/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_3));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = var_11;
                var_16 = 65508;
                var_17 = ((((max((255 ^ 255), (((arr_4 [i_0] [i_1] [i_0]) & 0))))) ? (((((var_7 ? (arr_4 [i_0] [i_0] [i_0]) : (arr_1 [i_0])))) ? ((max(481616321, var_3))) : var_8)) : (((var_11 ? ((var_13 ? 3867617402 : 0)) : (((((arr_3 [i_1]) <= var_7)))))))));
                var_18 = (max((max(1454957044, 17)), ((((var_12 > var_3) ? (max(var_10, 250)) : var_2)))));
            }
        }
    }
    var_19 = ((((((2903 ? -3959041180833924757 : 243)) - ((max(65535, var_10)))))) ? var_12 : (max(((max(-688271079, var_7))), var_9)));
    var_20 = (max(var_20, ((max(var_1, ((((min(var_3, var_12))) | var_7)))))));
    #pragma endscop
}
