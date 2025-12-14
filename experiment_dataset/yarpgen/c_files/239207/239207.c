/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (((arr_6 [i_0]) > 160));
                    arr_10 [i_0] = var_9;

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_13 = (max((arr_12 [i_0 + 1] [i_0 + 1] [10] [i_3 - 1]), var_1));
                        var_14 = ((~(149 ^ 4294967292)));
                        arr_15 [i_0 + 1] [i_1] [i_0] [1] = (min((arr_5 [i_3 - 1] [i_1] [i_0 - 1]), (((6845450613773854483 < (arr_9 [i_0] [i_0]))))));
                    }
                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {
                        var_15 = ((-((var_1 ? ((max(0, (arr_8 [i_0 + 2] [i_0 + 2] [4])))) : var_10))));
                        var_16 = ((~((min((arr_7 [i_0 - 1] [i_0 + 3] [i_0 + 3]), (arr_7 [i_0 + 1] [i_0 - 1] [i_0 + 3]))))));
                    }
                }
            }
        }
    }
    var_17 = var_8;
    #pragma endscop
}
