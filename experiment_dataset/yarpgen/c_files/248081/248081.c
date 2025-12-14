/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    var_19 = ((((-524400058 ? var_7 : ((var_5 ? var_6 : 1))))) || 1);
    var_20 = (~(((((29 ? var_4 : -524400058))) ? ((var_0 ? var_7 : 1)) : var_7)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_21 = ((524400056 ? (((((-524400058 - (arr_4 [i_0] [i_0] [i_1] [i_2])))) ? (min(var_4, (arr_4 [i_0] [i_0] [i_1] [i_2]))) : 1)) : (arr_1 [i_0])));
                    arr_6 [i_1] [i_1] [i_2] = (var_5 ? (!var_12) : (min((arr_3 [i_1]), (((arr_5 [i_1] [i_1] [i_2]) ? var_9 : var_16)))));
                    var_22 = (~1);
                    var_23 = (max(var_23, (arr_0 [i_1] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
