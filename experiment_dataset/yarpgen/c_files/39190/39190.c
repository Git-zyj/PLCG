/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0 - 2] [5] [i_2 + 1] = ((((var_1 ? 1666846474520501174 : 1500735304)) > (((9245669190303611307 ? 60 : 1500735300)))));
                    var_11 = (max(var_11, (((((var_9 ? (arr_4 [20]) : var_6)) ^ ((min(1, 778922767))))))));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_12 = ((var_3 / var_5) ? (-2147483647 - 1) : ((var_7 ? 2147483647 : var_2)));
            var_13 = ((var_6 <= (var_6 <= -1500735289)));
            var_14 = ((arr_8 [i_3 - 1] [1] [1] [i_3]) ? (arr_8 [i_3 + 1] [16] [16] [i_3]) : 16352);
        }
        var_15 = (((arr_3 [1]) ? (((var_7 ? (max((arr_5 [i_3] [i_3] [i_3] [i_3]), (arr_4 [8]))) : (((arr_8 [12] [6] [6] [i_3 - 1]) ? -1500735280 : (arr_6 [i_3] [i_3 - 1] [i_3] [i_3])))))) : (((((var_0 ? var_6 : var_3))) ? var_4 : (arr_5 [i_3 - 1] [1] [i_3] [21])))));
        var_16 = (((((16361 ? 16354 : -13))) <= (~var_3)));
    }
    #pragma endscop
}
