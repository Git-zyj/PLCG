/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((var_6 ? var_0 : var_13)))) % ((((((13863535424315453893 ? 65535 : 9223372036854775807))) && var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = ((((((arr_3 [i_0]) ? var_13 : (arr_2 [i_1])))) <= ((max(var_9, 17785)))));
                var_20 = ((((((var_7 ? 13863535424315453888 : var_5)))) ? ((55249 ? ((max((arr_1 [i_1] [i_0]), (arr_5 [i_0] [i_0] [i_0])))) : ((var_10 * (arr_4 [i_0] [i_1]))))) : (-2147483646 / var_9)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_21 |= max((((~((~(arr_9 [4])))))), (max((~13863535424315453865), (((var_13 ? 18 : -26720))))));
                            var_22 *= ((((((65532 ? var_2 : (arr_2 [i_0]))) < (((((arr_5 [i_0] [i_1] [i_1]) > (arr_11 [0] [i_1]))))))) ? (((((var_9 ? var_7 : (arr_11 [2] [i_3])))) ? (((1 / (arr_8 [i_3] [i_3])))) : (max((arr_11 [10] [i_1]), var_9)))) : (((max((arr_9 [8]), 4583208649394097737))))));
                        }
                    }
                }
                var_23 = (min(var_23, ((max(((((((arr_5 [i_0] [i_1 - 1] [i_0]) ? (arr_6 [i_0] [i_0] [i_1] [i_1 - 1]) : 13863535424315453865)) <= (((6 ? (arr_10 [i_0 - 1] [i_0] [i_0] [2] [i_1 - 1] [i_1 - 1]) : var_10)))))), (((!var_6) ^ -6)))))));
                arr_12 [i_0 - 1] = ((~(max(((var_17 ? var_12 : (arr_6 [i_0] [i_1] [i_1] [i_1]))), 0))));
            }
        }
    }
    #pragma endscop
}
