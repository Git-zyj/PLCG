/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (((arr_1 [i_2]) ? (((arr_0 [i_2]) ? (arr_5 [i_0] [i_0] [i_1] [i_2]) : (arr_0 [i_2]))) : (arr_5 [i_0] [i_2] [i_1] [i_0])));
                    var_17 = (min((arr_5 [i_0] [9] [i_1] [i_0]), (arr_6 [i_0] [4] [i_0] [4])));
                    arr_7 [i_0] [i_0] = (min((arr_6 [0] [i_0] [i_0] [i_0]), (arr_4 [i_0])));
                    arr_8 [i_0] = (max(32757, (((arr_5 [i_0] [i_0] [i_1] [i_2]) ? (((arr_4 [i_0]) ? 58617 : (arr_5 [i_0] [i_1] [i_2] [i_2]))) : ((((!(arr_0 [i_2])))))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((!(((~(!1))))));
                }
            }
        }
        var_18 = ((-(arr_0 [i_0])));
        arr_10 [7] [i_0] = (arr_5 [i_0] [1] [1] [i_0]);
    }
    var_19 = ((((var_6 ? (max(var_5, -7193102202760261385)) : (((23901 ? var_8 : var_13))))) / var_14));
    var_20 = 17;
    var_21 = (~var_3);
    #pragma endscop
}
