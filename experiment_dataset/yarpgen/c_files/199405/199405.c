/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 23;i_3 += 1)
                {
                    {
                        var_19 += 2803550632;
                        arr_12 [i_0] [i_2] [i_1] [i_0] = (min((((!(arr_2 [i_0 + 1] [i_2 + 1])))), ((-(((-141431799 + 2147483647) >> var_14))))));
                        arr_13 [i_2 + 1] [i_2 + 1] [i_3] [i_2] |= (min(-2331491333, var_8));
                    }
                }
            }
        }
        var_20 = (min(((((arr_2 [i_0 + 1] [i_0 + 1]) ? (arr_2 [i_0] [i_0]) : (arr_7 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0])))), (max(((-1 ? (arr_11 [i_0 + 1] [i_0 + 1]) : 64288496)), (arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 1])))));
        arr_14 [i_0] = ((((-(arr_11 [i_0 - 1] [i_0 + 1]))) <= var_6));
        var_21 = (max(var_21, 70));
    }
    var_22 |= var_12;
    #pragma endscop
}
