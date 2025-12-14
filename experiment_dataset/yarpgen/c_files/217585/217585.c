/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min(var_1, ((var_9 ? var_0 : var_5)))) & (var_6 % var_6)));

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        var_12 |= (((((arr_0 [4] [i_0 + 3]) != (arr_0 [1] [i_0 + 4]))) ? (((arr_1 [8]) % (arr_0 [8] [8]))) : (((arr_0 [4] [i_0 + 3]) - (arr_1 [8])))));
        arr_2 [i_0] = ((((~((max((arr_0 [i_0] [i_0]), var_8))))) ^ (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 4; i_1 < 8;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_2 - 1] [i_2 - 1] [i_3] = ((((((!var_7) * (arr_8 [i_1 - 4] [i_1 + 4])))) ? (max((((arr_6 [3] [7] [i_1 - 2]) ^ (arr_3 [i_1]))), (arr_3 [i_2 + 3]))) : var_0));
                    arr_11 [i_2 - 1] [i_2] [i_2 + 3] |= (((arr_9 [i_1] [i_1]) ? ((((arr_7 [i_1] [i_3]) ? (arr_5 [i_1]) : (arr_3 [i_3])))) : (~var_5)));
                    var_13 += (((max((arr_6 [i_3] [i_3] [i_3]), (arr_3 [i_1]))) | (((arr_8 [i_2] [i_3]) % (arr_5 [i_1])))));
                }
            }
        }
        var_14 = ((var_2 > (((arr_4 [i_1 - 2] [i_1 - 2]) >> (((arr_7 [i_1 - 3] [11]) - 20901))))));
    }
    var_15 = (var_1 / var_6);
    #pragma endscop
}
