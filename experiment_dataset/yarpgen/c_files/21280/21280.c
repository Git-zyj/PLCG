/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = (((arr_2 [i_0]) ? (arr_7 [i_0] [i_2] [i_2]) : (((((10336019598161653359 ? (arr_0 [i_0]) : (arr_3 [i_0])))) ? -1498284688 : 10336019598161653358))));
                    var_19 = ((((((((0 ? var_5 : 0))) ? 0 : 1))) ? (arr_6 [i_0] [i_1] [i_0]) : var_4));
                    arr_8 [i_2] [i_2] [i_2] [i_0] = var_6;
                    arr_9 [i_1] [i_1] [i_2] = ((((((max(549755551744, 10336019598161653359))) ? 16172037129642633481 : (arr_2 [i_0]))) > (max((((11 ? var_12 : (arr_0 [i_0])))), 1649938022467815687))));
                }
            }
        }
    }
    var_20 = (((((-var_4 ? (2274706944066918134 < -10) : 10336019598161653368))) ? ((var_3 ? ((16172037129642633481 ? 3824676238904843456 : -1397203678)) : ((2836673365 ? 0 : 6482750763439965875)))) : var_11));
    #pragma endscop
}
