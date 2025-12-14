/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = (max((((!(arr_3 [i_0 + 1])))), (arr_0 [i_0 + 2])));
                arr_4 [i_0] [i_1] = (arr_0 [i_0 + 2]);
            }
        }
    }

    for (int i_2 = 2; i_2 < 7;i_2 += 1)
    {
        arr_7 [5] [4] = ((-(((!(arr_5 [i_2 + 1]))))));
        arr_8 [i_2] = (((((157140630 << (((arr_1 [i_2 - 1]) - 160))))) ? (min((((arr_6 [1]) ? -80 : -1124036732)), (arr_2 [i_2 + 3] [i_2]))) : ((((arr_0 [i_2]) >= (((arr_2 [13] [9]) ? (arr_6 [i_2 + 4]) : (arr_6 [i_2]))))))));
    }
    var_12 = (max(var_12, (((var_3 ? var_9 : var_4)))));
    #pragma endscop
}
