/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] = ((~(((-32767 - 1) ^ 0))));
                    var_15 = 262144;
                    var_16 &= ((var_6 ? (arr_4 [4]) : var_13));
                    var_17 = 2097152;
                }
            }
        }
        var_18 &= 1;
        var_19 = ((-2097153 ? var_10 : (((11706572311396287898 ? var_14 : var_4)))));
        arr_8 [13] &= 32767;
        var_20 = var_0;
    }
    var_21 = (-32767 - 1);
    #pragma endscop
}
