/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((min(((((4294967294 / var_16) ? (((min(-15053, 59796)))) : var_11))), var_10)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 = ((((((min(12, 10))) ? ((min((arr_1 [i_0]), (arr_2 [i_0])))) : var_16)) / ((var_6 ? var_12 : (arr_5 [i_2 - 2])))));
                    arr_6 [i_0] [i_2 - 2] = ((!((((((min(var_18, var_10)) + 9223372036854775807)) << ((((var_3 * (arr_5 [i_1]))) - 2591106)))))));
                    var_22 = (min(var_22, ((max(((2383871705 ? var_5 : var_0)), ((((min(var_7, var_4)) > var_9))))))));
                }
            }
        }
    }
    var_23 = ((var_5 - ((~((var_5 ? var_7 : var_11))))));
    var_24 |= (max((max(var_13, 0)), ((((max(3529, 1817)))))));
    #pragma endscop
}
