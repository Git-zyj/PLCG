/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(((max(var_0, var_9)) & var_9))));
    var_11 = max((max(var_8, var_0)), (((-707265390 ? 41 : 707265389))));
    var_12 = (!var_2);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_13 *= (min((((!(((0 ? (arr_0 [i_0 + 1] [i_0 + 1]) : (arr_1 [i_0]))))))), (((arr_3 [i_0]) ? (arr_0 [i_0 - 2] [i_1 + 3]) : (arr_3 [i_0])))));
                arr_4 [i_0] [i_1] [i_0 + 2] = ((-((max((arr_3 [i_1]), (arr_3 [i_1]))))));
                var_14 |= (((arr_2 [i_1]) > (min(((var_9 ? var_2 : (arr_2 [i_0]))), (arr_1 [i_0 - 1])))));
                arr_5 [i_1] [i_1] [i_0] = (((((max((arr_2 [i_0]), var_5)))) > var_0));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_15 = ((((max(var_3, var_1))) % ((((arr_9 [i_0] [i_1 - 1] [i_2] [i_3]) > (arr_6 [i_0 + 2] [i_1 + 3] [i_2] [i_3 + 1]))))));
                            arr_12 [i_0] [i_1] [i_1] [i_1] [i_0] = (arr_6 [i_3] [i_1] [i_1] [i_0]);
                            arr_13 [i_0 - 1] [i_1 + 1] [i_1] [i_0 - 1] [i_1] [i_3] = ((1 ? (((~(arr_0 [i_0 + 2] [i_1 - 1])))) : ((((max(var_3, var_4))) ? var_5 : (arr_6 [i_0] [i_1 - 1] [i_2] [i_3])))));
                            var_16 = ((var_4 & (arr_3 [i_1])));
                        }
                    }
                }
            }
        }
    }
    var_17 = var_7;
    #pragma endscop
}
