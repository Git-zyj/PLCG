/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, (((-(((min((arr_3 [i_0]), var_11)) % 874163188)))))));
                    arr_9 [i_0] [i_0] [i_0] = (((((var_19 ? 874163204 : var_15))) ? (arr_8 [i_0] [i_1 - 3] [i_1 - 2]) : var_11));
                    arr_10 [i_2] [i_2] [i_2] = ((((4783 ? 1 : 48)) & (max((arr_7 [i_1 - 1] [i_1 + 1]), ((546805665 ? 1062551431 : var_9))))));
                }
            }
        }
    }
    var_22 = var_12;
    var_23 = var_16;
    var_24 = (!var_12);
    #pragma endscop
}
