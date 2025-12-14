/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_10 = ((~(((arr_1 [i_0 - 2]) ? var_7 : (arr_0 [3] [i_0 - 1])))));
        arr_2 [i_0] = min((((-(arr_0 [1] [i_0])))), ((((var_5 ? (arr_1 [i_0]) : var_5)) - ((((arr_1 [i_0]) ? (arr_1 [1]) : var_7))))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_7 [i_1] [i_2] [i_2] |= 1243677519;
            var_11 = (((arr_0 [i_2] [i_2]) || (((((min(var_7, var_9))) ? var_4 : var_0)))));
        }
        var_12 = (max(((-(arr_3 [i_1] [i_1 - 1]))), (((arr_3 [i_1] [i_1 - 1]) / (arr_3 [i_1 - 1] [i_1 - 1])))));
        arr_8 [i_1] |= ((((min((arr_6 [i_1 - 1] [i_1 - 1]), (arr_6 [i_1 - 1] [i_1 - 1])))) >= ((~(arr_6 [i_1 - 1] [i_1 - 1])))));
        var_13 |= ((((((arr_4 [i_1 - 1]) ? (arr_6 [i_1] [4]) : var_0))) ? ((((((((arr_5 [i_1] [7] [i_1 - 1]) + 9223372036854775807)) << (((arr_3 [1] [i_1]) - 15716))))) ? -var_4 : var_9)) : (((((!1) <= ((var_9 ? (arr_4 [12]) : var_8))))))));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3 - 1] = (max(var_1, (12052301992225545783 & 1031592053547263149)));
        arr_12 [i_3] = (max((((arr_3 [i_3 - 1] [16]) ? (arr_10 [i_3 - 1] [i_3]) : (arr_3 [i_3] [i_3 - 1]))), (max((((!(arr_3 [i_3] [i_3])))), (max(var_9, var_1))))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 20;i_5 += 1)
            {
                {
                    arr_21 [i_3] [i_3] [i_4] [13] = (arr_13 [i_3 - 1] [i_3 - 1]);
                    var_14 |= (-var_0 && var_1);
                    var_15 = arr_6 [i_3] [i_3];
                    arr_22 [i_3] [i_3] [i_3 - 1] |= ((((((arr_1 [i_4 + 1]) ? (arr_1 [i_4 + 1]) : var_6))) ? ((~(arr_19 [i_3 - 1] [i_3] [i_3] [13]))) : (((((((arr_0 [i_5 - 2] [i_3]) ? var_8 : (arr_13 [i_3] [i_4 - 1])))) ? (((arr_0 [i_4 + 1] [i_5]) ? 1 : var_5)) : ((((arr_1 [i_3]) ^ var_9))))))));
                }
            }
        }
    }
    var_16 |= ((((var_1 ? var_8 : (var_6 - var_3))) ^ (((~var_4) ? (min(var_6, var_1)) : (var_4 & 8)))));
    #pragma endscop
}
