/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_2 + 3] [4] [i_1] = ((var_6 ? -72 : (((var_4 | var_4) ? ((18588 ? (arr_3 [i_2 + 1]) : var_0)) : (arr_8 [i_2] [i_1] [i_2] [i_2 + 1])))));
                        arr_11 [i_0 - 1] [i_1] [i_1] = ((((max((arr_9 [i_3 - 1] [i_1] [i_1] [i_1 + 2]), (max(var_10, -90))))) ? var_6 : (max((((26 < (arr_1 [i_3] [i_2])))), ((-(arr_5 [i_0] [i_1] [i_2 + 4] [i_3])))))));
                        var_11 &= ((((((~((var_5 ? var_0 : 47)))) + 2147483647)) << (((((arr_3 [i_0 + 1]) << (((arr_3 [i_0 + 1]) - 2345331546)))) - 2931187712))));
                        arr_12 [i_1] [i_1 - 3] [i_2 + 3] [4] [i_3] [i_3] = ((((var_6 / (arr_9 [i_0] [i_1] [i_0] [i_0 - 1]))) / (((arr_9 [i_0] [i_1] [i_0] [i_0]) * (arr_9 [i_0 - 2] [i_1] [9] [i_3])))));
                        arr_13 [i_3] [i_1] [i_1] [1] = (((arr_5 [i_0] [6] [i_2] [i_3]) ? ((-(arr_1 [i_2] [i_2 + 3]))) : (~var_6)));
                    }
                }
            }
        }
        var_12 = (min(var_12, (((((arr_3 [i_0 + 1]) | (arr_3 [i_0 - 2])))))));
    }
    var_13 = ((((1766157171419085050 ? -30 : var_2))));
    #pragma endscop
}
