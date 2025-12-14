/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((max(((-var_5 ? (var_7 * var_4) : var_6)), var_7)))));
                    arr_10 [i_1] = var_2;
                    arr_11 [i_1] = var_6;
                }
            }
        }
    }
    var_15 = var_6;
    var_16 = (((((var_8 ? var_6 : ((var_5 ? var_11 : var_11))))) ? (((var_12 ^ var_9) ? (4761872013142551169 < 0) : var_9)) : (((((65535 ? var_9 : var_0)) != ((min(var_0, var_8))))))));
    #pragma endscop
}
