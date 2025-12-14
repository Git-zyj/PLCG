/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (arr_4 [i_0])));
                var_16 = ((-((-((min((arr_3 [i_0]), (arr_3 [i_0]))))))));
                var_17 = (min((-127 - 1), (arr_3 [i_0 - 3])));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_14 [8] [1] [i_1 + 3] [i_2] [i_2] [i_1 + 3] = ((-(((arr_8 [i_0 - 2]) - (arr_8 [i_0 - 1])))));
                            arr_15 [i_0 - 3] [14] [i_2] [14] = (((((((6 ? var_10 : (arr_5 [8])))) ? (((var_1 ? (arr_4 [i_0]) : var_10))) : (min(var_0, 190111124)))) - -1099629306));
                            arr_16 [6] [i_1] [i_1] [i_1] [i_1] = ((((((arr_5 [i_0 - 3]) ? (arr_8 [i_0 - 3]) : (arr_5 [i_0 - 3])))) ? (arr_8 [i_0 - 3]) : (min((arr_8 [i_0 - 3]), (arr_5 [i_0 - 3])))));
                        }
                    }
                }
                arr_17 [i_0] [i_1 - 2] [i_0] &= ((-((~(arr_11 [i_0] [i_0 + 1] [i_1])))));
            }
        }
    }
    var_18 = ((((((var_9 | var_11) > var_3))) != var_8));
    var_19 |= ((var_4 ? var_8 : ((var_4 ? 190111130 : var_9))));
    var_20 += var_10;
    #pragma endscop
}
