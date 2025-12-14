/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-((-((var_5 ? var_3 : 224))))));
    var_15 = (((((var_2 ? var_2 : ((210 ? var_6 : var_13))))) ? 32 : (((((var_8 ? var_12 : var_10)) >= (((49 ? 40 : -1136732836))))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = (max(var_16, (((((arr_0 [i_0]) % var_5))))));
        var_17 = -var_11;
        arr_2 [i_0] = (((((((((arr_1 [i_0] [i_0]) & (arr_1 [1] [i_0])))) ? ((45023 ? var_2 : var_7)) : ((var_2 ? (arr_1 [i_0] [i_0]) : var_5))))) ? ((var_10 ? (arr_0 [i_0]) : -1)) : var_1));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_18 = (((((((arr_4 [21] [i_1]) ? var_11 : var_7)) >= ((((arr_4 [i_1] [i_1]) && var_12))))) ? var_4 : (!255)));
        arr_6 [i_1] = ((((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [4]))));
        var_19 = (min(var_19, var_5));
    }
    var_20 = (min(var_20, ((((((var_3 ? (var_11 * var_11) : var_2))) ? (((64 ? 3585890900 : 40))) : (var_3 * 64))))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            {
                var_21 = (((((816455464 ? -var_0 : -var_5))) ? ((+(((arr_4 [i_2] [i_3]) ? var_1 : (arr_0 [i_3]))))) : (arr_7 [i_2] [i_2])));
                var_22 = (-var_3 ? 207 : (((((arr_9 [i_2]) & 65535)) | (((arr_3 [i_2]) ? var_5 : var_7)))));
            }
        }
    }
    #pragma endscop
}
