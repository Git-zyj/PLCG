/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((max(((var_2 ? var_8 : var_12)), (var_2 + var_2))) - ((var_3 ? var_5 : var_12))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 &= (2806528505 / 1);
                    var_15 *= var_8;
                    var_16 = (((((var_1 ? var_6 : (min(var_9, var_6))))) ? ((max((max(var_12, var_7)), var_5))) : var_7));
                }
            }
        }
        var_17 = (max(var_17, var_11));
        var_18 *= ((((max(((var_5 ? var_5 : var_10)), ((min(var_8, var_10)))))) ? ((min((min(var_10, var_1)), var_1))) : var_13));
    }
    var_19 = var_3;
    #pragma endscop
}
