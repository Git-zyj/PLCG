/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = ((28093 ? -36 : 1));
                arr_7 [5] [5] = (((((((min(var_6, var_12))) && (31 || 1)))) * ((1 - (1 == 1)))));
                arr_8 [i_1] = (((min((3786463854 - -20735), -20716)) / var_17));
            }
        }
    }
    var_22 = (((var_6 >= var_2) ? (((((min(127, var_8))) || var_14))) : (((var_13 || (((3767276932 ? 10 : 1428881862))))))));
    #pragma endscop
}
