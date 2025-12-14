/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(((var_7 ? var_11 : ((var_7 ? 53415 : var_13)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((!((((((1 ? 549755805696 : (arr_3 [i_0] [i_1] [i_0])))) ? (max(var_6, 18446743523953745923)) : 59)))));
                var_15 += ((~((~(((arr_0 [i_0]) | var_9))))));
            }
        }
    }
    var_16 = (+(max((~var_5), -var_1)));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                {
                    var_17 = 18446744073709551610;
                    var_18 ^= (min((min(var_5, (((var_4 ? (arr_5 [16]) : var_1))))), (((-((var_3 ? var_8 : 176)))))));
                    var_19 = (((arr_9 [1] [i_2] [i_2] [i_2]) * (min((max(var_7, var_6)), (arr_0 [i_3])))));
                }
            }
        }
    }
    #pragma endscop
}
