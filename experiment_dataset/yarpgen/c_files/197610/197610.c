/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_18 - var_0);
    var_21 = 1;

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_22 = ((((((((var_10 ? var_4 : (arr_2 [i_0] [i_0])))) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? var_12 : (((arr_1 [i_0]) * var_9))));
        var_23 |= (((((var_10 ? 12142657457401666808 : (arr_0 [i_0 + 1] [i_0 + 1])))) ? (((-9223372036854775807 - 1) ? (~3) : (((arr_1 [8]) ? var_11 : var_3)))) : (((arr_2 [i_0] [i_0 + 2]) ? (arr_2 [i_0] [i_0 + 2]) : var_11))));
    }
    for (int i_1 = 3; i_1 < 8;i_1 += 1)
    {
        var_24 = ((((536870912 ? (arr_4 [i_1 - 3]) : 4118035780))) ? ((min((arr_4 [i_1 - 3]), (arr_4 [i_1 - 1])))) : (~var_10));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {
                {
                    var_25 = (min(var_25, ((((((var_5 ? 3887 : (arr_5 [i_1] [4] [i_3]))) >= (((arr_8 [i_1] [i_2] [i_3]) ? (arr_9 [i_2] [i_3]) : var_17))))))));
                    arr_10 [i_3] [6] [i_3] = ((((((arr_4 [i_1]) ? ((65534 ? var_3 : 4118035780)) : ((((!(arr_8 [i_1] [i_2] [1])))))))) ? (((arr_7 [6] [i_3] [i_3 - 1] [i_1 + 1]) ? ((var_17 ? (arr_6 [i_1]) : 142)) : 113)) : ((((((1 ? var_8 : var_15))) ? var_5 : ((2147483647 ? var_9 : (arr_7 [i_1] [0] [i_3] [i_3]))))))));
                }
            }
        }
    }
    var_26 = (var_12 / var_0);
    #pragma endscop
}
