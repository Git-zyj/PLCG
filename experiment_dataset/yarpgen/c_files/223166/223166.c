/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_19 ^= ((((-251155302 ? ((((!(arr_1 [i_0] [i_0]))))) : var_14)) + (((var_10 ? 33554416 : -93)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_2] [i_2] = ((-((-((max(0, 1)))))));

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        arr_11 [i_2] [i_2] [i_1] [i_2] = (((106 & 148) ? 91 : (((!(((var_11 ? 560295318 : 3734671995))))))));
                        var_20 = (min(var_20, (((((((169 >> (((arr_5 [1] [i_1] [9] [10]) - 28686)))) & ((((arr_4 [i_0] [i_0] [i_2] [i_3]) == 0))))) > var_13)))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_21 = (max(var_21, (((((((arr_4 [1] [i_0] [11] [i_0 - 1]) ? (max(var_8, var_16)) : (arr_7 [i_0 - 2] [8] [8] [1] [i_4 - 3] [i_4 - 3])))) ? ((((((0 ? var_4 : 4244262875)) > (2147483647 * 0))))) : (((arr_15 [0] [12] [i_0]) ? 1 : (arr_8 [0] [i_0] [i_0] [4] [i_5] [0]))))))));
                    var_22 = ((((-(arr_2 [i_0 - 1]))) == (((arr_0 [i_0 - 1]) - 1))));
                    arr_16 [i_4] [9] = ((1 ? (var_4 - -777628636523415176) : (10187 > var_17)));
                    arr_17 [i_0] [14] [i_5] [i_4] = (((min((var_17 >= var_14), -6189012643159555422)) << ((((((max(233, (arr_0 [1]))))) != (((arr_9 [3] [3] [1] [i_4] [1]) % var_0)))))));
                    var_23 += (var_12 ? (((((-9223372036854775807 - 1) > -25093)) ? (var_13 == var_2) : (min(var_14, (arr_0 [i_5]))))) : ((((var_11 < 0) ? -26560 : var_3))));
                }
            }
        }
    }
    #pragma endscop
}
