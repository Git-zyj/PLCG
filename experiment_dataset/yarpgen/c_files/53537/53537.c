/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((-(max(var_3, var_8)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((~(((-1 != ((max(var_11, var_8))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [0] [13] [i_3 + 3] [11] [i_3] = arr_7 [i_0] [i_1] [i_2] [11];
                        var_14 = (arr_6 [4] [i_2 - 3] [i_3 - 2]);
                        arr_12 [13] [5] [i_3] [i_3] = (arr_5 [i_2 + 2] [i_2 + 1] [i_3 - 3] [9]);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_15 = ((!(((((arr_14 [17]) ? 0 : 58))))));
        var_16 |= ((-((var_4 ? var_6 : 123))));
    }
    #pragma endscop
}
