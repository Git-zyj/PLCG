/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((((var_9 ? (var_7 || var_5) : (!var_10)))) ? var_10 : var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((~(max((!var_6), (var_3 | var_1)))));
                                arr_13 [3] [i_1] = (max(((((arr_8 [i_0] [i_3 + 1] [i_3] [i_3 + 1]) ? var_5 : (arr_2 [i_1])))), -13073672070327900438));
                                arr_14 [i_0] = (((((((var_3 * (arr_3 [i_4])))) ? (max((arr_3 [i_0]), var_10)) : ((((var_9 < (arr_6 [i_0]))))))) < (arr_8 [i_3 + 1] [1] [i_3] [i_3 + 1])));
                            }
                        }
                    }
                }
                var_14 = max((((!(arr_1 [6] [i_1])))), (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_23 [i_5] [i_1] [i_1] = (((((0 ? 7 : 0))) >= (((((var_7 ? (arr_18 [i_5] [i_1] [i_5] [i_6]) : var_5))) ? (min((arr_17 [i_0] [i_1] [i_5]), var_12)) : ((((!(arr_18 [i_5] [i_1] [i_5] [i_0])))))))));
                            arr_24 [i_0] [i_0] [i_0] [i_6] [i_5] [i_5] = ((261632 ? 123 : 2532768074051583316));
                        }
                    }
                }
                arr_25 [i_0] [i_0] [i_0] = arr_2 [i_1];
            }
        }
    }
    var_15 = (max(var_15, var_6));
    var_16 &= (max(var_8, ((((var_8 ? var_6 : var_1)) / -132))));
    #pragma endscop
}
