/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!((max((max(var_0, 933710506673352455)), ((var_14 ? var_8 : var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_18 -= (min(var_7, ((var_2 ? (!var_11) : (((arr_3 [i_3]) ? var_6 : var_15))))));
                            arr_11 [i_0] [i_3] [i_1] [i_3] [i_3] [i_3] = ((!((min((((arr_6 [11] [11]) % (arr_10 [i_0] [i_0] [1] [i_3] [10] [i_1]))), ((var_10 ? (arr_2 [i_2]) : 0)))))));
                        }
                    }
                }
                arr_12 [i_0] [i_1] = ((min((arr_9 [8] [i_1 + 1] [i_0] [i_0] [i_0]), (arr_9 [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1] [16]))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_19 = ((!(arr_19 [i_0] [i_1] [i_0] [i_0])));
                            var_20 = ((-(min(var_15, var_16))));
                            var_21 = (max(((var_12 ? (arr_7 [i_1 + 1] [i_1 + 1] [i_5 + 1] [i_5 - 1]) : -98)), ((~((min((arr_2 [i_5]), (arr_4 [i_0]))))))));
                        }
                    }
                }
                var_22 = ((((max((arr_10 [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1]), (!var_13)))) ? var_4 : (min(((~(arr_7 [i_0] [1] [i_1] [i_1]))), (((var_3 || (arr_15 [i_0] [i_0] [2] [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
