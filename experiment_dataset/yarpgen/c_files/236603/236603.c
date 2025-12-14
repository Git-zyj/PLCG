/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(var_3, (var_10 - var_9)))) ? var_4 : (((var_3 ? -var_6 : (65535 == var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (arr_0 [i_0]);
                var_20 &= ((-(((arr_7 [8] [i_1]) * ((0 * (arr_6 [i_1])))))));
                arr_8 [i_0] = ((((max(-11286006366871919490, (57344 < 8191)))) ? (((var_6 ? (2539142056 ^ 1) : (arr_5 [9] [1] [1])))) : (((((arr_2 [2]) ? (arr_1 [4]) : var_12)) * 16516))));
            }
        }
    }
    var_21 = ((max((~0), 4294967295)) ^ 9831);
    var_22 = var_11;
    var_23 = var_5;
    #pragma endscop
}
