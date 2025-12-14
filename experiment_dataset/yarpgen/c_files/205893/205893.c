/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [1] = ((((min((arr_1 [i_0] [i_1]), (~var_2)))) ? (arr_4 [i_0]) : (min(((var_17 ? var_19 : 1)), (arr_0 [i_0])))));
                arr_6 [i_0] = (min(var_7, (((var_12 ? (arr_3 [i_1]) : (((var_2 >= (arr_1 [i_0] [i_0])))))))));
            }
        }
    }
    var_21 = var_12;
    var_22 = (max((((var_11 * 0) ? -var_2 : var_13)), var_9));
    var_23 += (((((var_6 ? (max(var_19, var_19)) : ((var_0 ? var_19 : -1722054301))))) ? var_15 : var_7));
    #pragma endscop
}
