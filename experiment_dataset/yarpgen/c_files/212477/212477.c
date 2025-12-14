/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= ((((var_1 >> (var_14 - 660925782))) != -424201284));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((((((max((arr_7 [i_2]), var_6))) ? (max(var_0, var_13)) : var_6)) << (var_7 - 61373)));
                    var_17 = var_1;
                    var_18 = 51082;
                    var_19 = 53481;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = var_9;
                                arr_16 [i_0] [i_1] [i_2] [i_3 - 1] [i_3 - 1] = (((((!(arr_8 [i_4] [i_3] [i_1])))) >> (((arr_12 [i_0] [i_3 - 1] [i_3] [i_3]) - 784948626))));
                                var_21 = ((((-1257085380 ? var_3 : (((var_0 + 2147483647) << (1257085380 - 1257085380)))))) ? (arr_2 [i_1]) : (((((!(arr_15 [i_0] [i_0] [i_2] [i_1] [i_0] [i_4] [i_4]))) || ((((arr_11 [i_0] [i_0]) ? (arr_13 [i_0] [i_1] [i_0]) : (arr_3 [i_0]))))))));
                                var_22 = (max(0, -193431275));
                                arr_17 [i_1] [7] [i_2] [i_3] [i_2] = max((((730101856 % 28391) ? (-1257085380 >= var_15) : (min((arr_8 [i_1] [i_1] [i_2]), 29502)))), ((~(arr_15 [i_3] [i_3 - 1] [i_3 - 1] [i_1] [i_3 - 1] [i_3 - 2] [i_3 - 2]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
