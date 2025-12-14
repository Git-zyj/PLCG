/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((18446744073709551610 ? 5 : 0)), (min((-32766 & 9), ((var_5 ? 264241152 : var_6))))));
    var_18 = 32765;
    var_19 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_20 = arr_9 [i_0] [i_0] [i_0] [i_0];
                        arr_10 [13] [i_0] [i_2] [13] [i_0] [15] = (min(134, var_15));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_21 = 1;
                        var_22 &= (max(3497902352, (min((arr_4 [i_0] [i_2 - 2] [i_4]), (arr_4 [i_2 + 1] [i_2 - 1] [i_4])))));
                        arr_14 [i_0] [i_0] [i_0] [i_4] = (((max((arr_1 [i_0]), (arr_8 [i_2] [i_0] [i_0] [i_2 + 1]))) >= (arr_1 [i_0])));
                        arr_15 [i_1] [i_2] [i_2] [i_0] &= ((-2 ? var_15 : (max((arr_9 [i_2 - 1] [6] [i_2] [6]), (arr_9 [i_2 - 2] [i_2 - 2] [i_2] [i_4])))));
                        arr_16 [i_4] [i_0] [i_0] [i_1] [i_0] [i_0] = 2093329516187830322;
                    }
                    arr_17 [i_0] [i_0] [i_0] = var_2;
                }
            }
        }
    }
    #pragma endscop
}
