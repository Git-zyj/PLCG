/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_10 = (min(var_10, ((max((((((((arr_0 [5]) | (arr_2 [i_0])))) || -var_9))), var_3)))));
        var_11 = (min(((((((arr_1 [i_0]) ? 127 : var_9))) * (((arr_1 [i_0]) % var_9)))), (((((1645115599 ? 62373 : (-2147483647 - 1))) << (var_9 || 1))))));
        var_12 -= (max((((((arr_2 [i_0]) + 2147483647)) >> (((min(var_8, (arr_2 [i_0]))) - 13941018502967095648)))), (((var_7 != (arr_1 [i_0 - 1]))))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_13 = ((((6 ? (arr_9 [i_2 - 4] [i_1] [i_2 - 1] [i_3] [i_0 + 1]) : (arr_9 [i_2 - 3] [i_1] [i_3] [i_3] [i_0 + 1]))) == (((((arr_5 [i_2 + 1]) < -1))))));
                        arr_11 [i_1] [i_2 + 1] [i_1] [i_0] &= (arr_6 [i_0] [i_0 + 1] [i_2 - 4] [14]);
                    }
                }
            }
            var_14 = (arr_8 [i_0 - 1] [i_0 - 2] [i_0 - 2]);
        }
        for (int i_4 = 4; i_4 < 24;i_4 += 1)
        {
            var_15 = ((((((var_9 + (arr_8 [13] [i_0] [13])))) || (((var_3 ? (arr_8 [i_0 - 1] [i_4 - 3] [i_0 - 1]) : var_3))))));
            var_16 = (((((2147483647 ? (arr_12 [i_4 - 1] [i_0 - 1]) : (max((arr_9 [8] [i_4] [8] [i_0] [4]), 50532))))) ? (arr_3 [i_4 - 1] [i_4]) : (-2147483647 - 1)));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            arr_18 [i_0] [5] [1] = (min((arr_17 [i_0] [i_5]), (arr_17 [i_5] [i_0 - 2])));
            var_17 = (max(var_17, (((var_8 ? ((((~2147483647) ? ((~(arr_2 [i_0 - 1]))) : -2147483647))) : (arr_4 [i_0] [i_5]))))));
        }
    }
    var_18 = var_1;
    var_19 = var_7;
    #pragma endscop
}
