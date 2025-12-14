/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_6 ? var_10 : var_2)) >= var_0));
    var_13 = (((max(var_11, var_8))) ? -13 : var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (798 / ((var_11 ? (arr_0 [i_0] [i_1 - 1]) : var_2)));
                arr_4 [i_0] = (arr_1 [i_1] [i_1 + 2]);

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_15 = -97928587892013682;
                        arr_10 [i_0] [i_3] [i_2] [i_0] = ((!((min(-97928587892013663, -188478184237709427)))));
                    }
                    arr_11 [7] [i_1] [i_1] [i_2] = (min(-3319675822, (((var_9 + 2147483647) << (((((min(97928587892013681, -15)) + 28)) - 13))))));
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    arr_16 [i_0] [i_0] [i_1] [i_4] = (((arr_1 [i_1 - 1] [i_1 + 2]) ? (arr_3 [i_1 - 1] [i_1 + 2]) : (((arr_1 [i_1 + 3] [i_1 + 1]) ? (arr_1 [i_1 + 3] [i_1 - 1]) : (arr_7 [4] [4])))));
                    var_16 = ((((min((min(97928587892013701, (arr_9 [10] [i_1] [11] [i_0]))), (((arr_1 [i_1] [i_1 + 1]) ? var_2 : (arr_14 [i_4] [i_1] [i_0])))))) ? (max(143, (((arr_9 [i_0] [i_0] [5] [5]) ? -120584278251252718 : (arr_6 [i_0]))))) : (arr_2 [i_1 - 1])));
                }
                arr_17 [i_0] = ((~((~(((arr_13 [i_1] [14] [i_0] [5]) ? 5 : -97928587892013656))))));
            }
        }
    }
    var_17 = ((var_4 ? var_5 : var_8));
    #pragma endscop
}
