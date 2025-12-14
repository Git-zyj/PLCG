/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_7));
    var_13 = (!var_3);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_1] &= (~((((((arr_4 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0])))) ? 1936715986 : (((arr_4 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_2]) : (arr_0 [i_0]))))));
                    var_14 = (min(var_14, (((((!(arr_2 [i_1] [i_1 - 1]))) ? (arr_5 [i_1]) : (((((arr_6 [i_2 - 1] [i_1] [i_0 + 2] [i_0 + 2]) && (arr_6 [i_2 - 1] [i_0] [i_0 + 2] [i_0 + 2]))))))))));
                    var_15 += ((!((58120 == (((arr_4 [i_0] [i_1] [i_2]) / (arr_4 [i_0] [i_0] [i_0])))))));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        var_16 += ((min((arr_8 [i_3]), (arr_11 [i_3]))));
        arr_12 [i_3] = (max(58120, 7411));
        var_17 = (1 * -1427074190);
    }
    #pragma endscop
}
