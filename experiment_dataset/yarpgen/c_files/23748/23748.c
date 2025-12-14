/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (arr_1 [i_0] [i_0]);
        var_15 = (max(var_15, (arr_0 [i_0])));
        arr_2 [i_0] = 112;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_8 [i_1] = var_1;
            var_16 = (((arr_6 [i_1] [i_1] [i_1]) ? (((arr_3 [i_1]) ? (185 == var_9) : 60277)) : (((((arr_6 [i_1] [i_1] [i_1]) || var_6)) ? var_3 : (arr_7 [i_1] [i_1])))));
            arr_9 [i_1] = (min((min((arr_6 [i_1] [i_1] [i_2]), (var_11 > 59418))), ((5259 / ((var_8 * (arr_6 [i_1] [i_1] [i_1])))))));
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_16 [i_1] [i_1] [i_1] [11] = ((((min((((arr_10 [15]) | -1086487040831188968)), ((max(3, (arr_11 [18]))))))) ? ((((((var_3 ? (arr_10 [i_3]) : 6118))) ? (arr_13 [i_5]) : 25330))) : ((~(max((arr_12 [12] [i_3] [i_1]), 18446744073709551615))))));
                        arr_17 [5] [i_3] = (((arr_5 [i_4]) / (((min((arr_11 [i_1]), (arr_4 [i_1])))))));
                        var_17 ^= ((~(arr_7 [i_4] [i_5])));
                    }
                }
            }
        }
    }
    var_18 = var_10;
    #pragma endscop
}
