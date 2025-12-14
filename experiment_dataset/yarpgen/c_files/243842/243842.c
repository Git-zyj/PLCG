/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((var_2 ? var_12 : var_2))));
    var_14 = ((!((var_2 != (1899533977 % 43208)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = ((((0 ? 1048575 : -15))) ? (min((arr_0 [i_0]), 10)) : (((max((arr_2 [i_0] [5]), (arr_2 [i_0] [i_0]))))));
        arr_4 [i_0] [23] = ((192 * (arr_1 [i_0])));
        var_15 = ((-(arr_0 [1])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = var_1;
                    arr_9 [i_1] = (arr_6 [i_2]);
                    var_17 = (arr_5 [i_1]);
                }
            }
        }
        var_18 = ((+((((arr_1 [18]) <= var_0)))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_19 *= (((arr_2 [i_3] [i_3]) > 1));
        var_20 = (!7737607958688580359);
        arr_12 [i_3] = (arr_0 [13]);
    }
    #pragma endscop
}
