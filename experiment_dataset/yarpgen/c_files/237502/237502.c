/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1 - 2] [11] [i_1] = ((((min((arr_5 [9] [i_1] [i_2] [2]), ((204 ? 0 : 9223372036854775790))))) ? var_13 : (((arr_5 [i_1 - 2] [i_1] [i_1 + 2] [i_1 - 2]) ? var_0 : (arr_5 [i_1 - 1] [i_1] [2] [i_1 - 1])))));
                    var_14 = ((((((min((arr_3 [i_1]), var_11)))) > (((arr_0 [2]) + var_12)))));

                    for (int i_3 = 2; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_1] [i_1] = (((((min(-109, 50876))) && var_5)) ? (((min((arr_0 [2]), -122)))) : var_1);
                        arr_12 [i_0] [i_1] [i_2] [6] &= ((+(min((arr_0 [i_3 + 2]), (arr_0 [i_3 - 1])))));
                    }
                    for (int i_4 = 2; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_15 ^= var_1;
                        arr_15 [i_0] [i_0] [i_1] [i_4] = ((~(min((arr_14 [i_0] [i_0] [i_0] [i_1]), ((min(var_10, (arr_5 [i_0] [i_1] [i_1] [10]))))))));
                    }
                }
            }
        }
    }
    var_16 = (max(var_16, var_4));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            {
                arr_21 [i_5] = ((var_7 ? ((~((22 ? -117 : (arr_20 [i_6] [i_5] [i_5]))))) : 4264));
                var_17 = (max(var_17, 9223372036854775788));
                arr_22 [i_5] [i_6] [i_5] = (min(((~(min((arr_3 [i_5]), (arr_13 [i_5]))))), (((-(arr_1 [i_5 + 1]))))));
                arr_23 [i_5] = ((((arr_6 [i_5] [i_5]) ? (var_5 | var_3) : 30190)));
                var_18 = (max(var_18, (((18446744073709551601 & ((((~-60) & (((arr_6 [i_5] [6]) ? 2173310085 : 2121657211))))))))));
            }
        }
    }
    #pragma endscop
}
