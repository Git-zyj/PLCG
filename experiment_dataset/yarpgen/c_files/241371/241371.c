/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 6;i_2 += 1)
            {
                {
                    var_17 = ((255 ? 12107 : 224));
                    var_18 = (var_12 + var_8);
                }
            }
        }
    }
    var_19 = (min(var_19, ((min(var_6, var_5)))));
    var_20 = (min(var_20, ((((1019290808 - 18446744073709551615) ? var_13 : (((((var_6 ? -22 : var_14))) ? (var_13 / var_8) : ((31 ? var_6 : 3275676487)))))))));
    var_21 = ((+((((var_5 == var_11) >= (var_12 & var_14))))));
    var_22 = var_5;
    #pragma endscop
}
