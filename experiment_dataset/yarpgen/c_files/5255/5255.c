/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = min((((((8451017192489088935 ? var_1 : (arr_1 [i_1] [i_1])))) ? ((var_16 ? (arr_2 [i_0] [i_0] [i_1]) : (arr_1 [10] [i_1]))) : var_15)), ((((max(var_15, var_15)) < (((arr_1 [i_1] [i_0]) ? var_6 : 8451017192489088935))))));
                var_18 = (var_12 ? ((var_11 ? ((var_12 ? 3855066384814807149 : 8998098581274747020)) : (min((arr_1 [i_0] [i_0]), -8451017192489088949)))) : (((min((!var_4), (var_13 < 3872449479978481279))))));
                arr_4 [i_1] = 8855191199655604770;
            }
        }
    }
    var_19 = (~(max(((566059805829389296 ? var_2 : var_13)), var_13)));
    var_20 = (((((((min(var_12, var_8))) ? var_9 : var_10))) || var_1));
    #pragma endscop
}
