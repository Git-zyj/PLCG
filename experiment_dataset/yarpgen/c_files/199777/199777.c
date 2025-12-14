/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((!((((max(var_4, -3779)) / ((var_1 ? 3779 : var_14))))))))));
    var_16 = (((max(((max(var_10, var_5)), var_9)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_17 = (max(var_17, (((((((arr_3 [i_1] [i_3]) ? (arr_3 [i_1] [i_3]) : 3769))) || (((~(((((arr_1 [13]) + 2147483647)) >> (((arr_3 [i_2] [i_1]) + 15693))))))))))));
                        var_18 = (max(var_18, (--3759)));
                        arr_9 [8] [i_1] [i_2] [i_2] [i_3] = 32767;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                {
                    arr_15 [i_0] [i_4] [i_5] = (arr_2 [i_0] [i_4] [i_5]);
                    arr_16 [i_0] [i_0] [i_4] [i_5] = ((((((arr_2 [i_5 + 1] [i_5 + 1] [i_5]) ? (arr_2 [i_5 - 1] [i_5 + 1] [i_5]) : (arr_2 [i_5 - 1] [i_5 + 1] [11])))) ? (arr_2 [i_5 + 1] [i_5 + 1] [i_5]) : (((arr_2 [i_5 - 1] [i_5 - 1] [i_5]) ? (arr_2 [i_5 + 1] [i_5 - 1] [i_5 + 1]) : (arr_2 [i_5 - 1] [i_5 + 1] [i_5 - 1])))));
                    var_19 = ((((arr_12 [i_5] [i_5 + 1] [i_5 - 1]) ? (arr_1 [i_5 - 1]) : (((arr_6 [i_5] [i_0] [i_4] [i_0]) + (-2147483647 - 1))))) / (((arr_5 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5]) ? (arr_10 [i_5 + 1] [i_5 + 1] [i_5 + 1]) : 3779)));
                    arr_17 [i_5] = ((((arr_4 [i_5 - 1]) >= (arr_12 [i_5 - 1] [i_5 + 1] [i_5 - 1]))));
                }
            }
        }
    }
    #pragma endscop
}
