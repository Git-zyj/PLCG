/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!(((var_14 ? var_12 : var_8)))));
    var_18 = ((!((max(var_11, var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (((arr_3 [i_1 - 1]) / (((((!(arr_9 [i_0]))) ? (arr_4 [i_2] [i_2]) : (arr_7 [i_0] [i_1 - 1] [16]))))));
                    arr_10 [i_0] [i_1] [i_2] = ((((arr_1 [i_1] [i_0]) ? (arr_9 [i_2 - 3]) : (arr_1 [i_0] [16]))));
                    var_20 = (min(var_20, (((((((arr_2 [i_0] [0] [i_2]) ? (arr_0 [i_0] [i_1]) : (arr_9 [i_0]))) * ((127 ? 106 : -344))))))));
                }
            }
        }
    }
    var_21 = (!var_12);
    #pragma endscop
}
