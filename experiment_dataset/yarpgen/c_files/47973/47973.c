/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((!(arr_0 [i_0] [i_0]))));
        var_14 = (max(var_14, (((!((((((var_8 ? (arr_0 [i_0] [i_0]) : var_2))) ? ((66 & (arr_1 [1]))) : (((((arr_0 [17] [17]) + 2147483647)) << (var_1 - 4095044741)))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = 45898;
                    var_16 = (min((max((arr_0 [i_0] [i_2]), (arr_8 [i_0] [i_0]))), ((((arr_1 [i_2]) ? (arr_1 [i_1]) : (arr_1 [i_1]))))));
                    arr_9 [i_0] [i_0] [i_1] [i_1] = (max(((19860 ? var_5 : ((var_9 ? 14095360063425415001 : (arr_3 [i_0] [i_1]))))), (arr_6 [i_0] [i_0] [i_0])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    arr_14 [i_4] [6] &= ((((((min(1, var_4))) || (3076 || var_10))) && ((min((arr_11 [i_0] [i_3 + 1] [i_3]), (arr_10 [i_0] [i_3 - 2] [i_3 + 1]))))));
                    arr_15 [i_0] [i_0] [2] = (var_2 / var_12);
                }
            }
        }
    }
    var_17 = (var_3 & var_5);
    #pragma endscop
}
