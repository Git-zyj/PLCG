/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_10;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_16 = var_5;
        arr_4 [18] &= ((((var_6 ? var_0 : var_6)) | (((var_1 >> (var_9 - 17028))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (var_8 <= var_6);
                    var_18 = (((((var_9 ? var_10 : var_4))) ? var_5 : var_2));
                    var_19 = ((((var_4 ? var_9 : var_14)) | (var_10 - var_2)));
                }
            }
        }
        var_20 = (min(var_20, var_12));
    }
    #pragma endscop
}
