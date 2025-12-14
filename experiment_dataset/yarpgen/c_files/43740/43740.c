/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = ((~(arr_2 [i_0] [i_0])));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_14 = ((-(arr_4 [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    {
                        var_15 = (((arr_4 [i_1 + 1] [i_1 + 3]) ? (~-1) : (((arr_0 [4] [i_1 + 4]) ? (arr_5 [i_0] [i_0]) : (arr_9 [13] [i_0] [i_0])))));
                        var_16 = (max(var_16, ((((arr_5 [i_0] [i_1 - 1]) ? (arr_2 [23] [i_1 + 2]) : (arr_9 [1] [11] [11]))))));
                    }
                }
            }
            var_17 = (arr_1 [i_1 + 1] [i_1 + 3]);
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        var_18 = (((((-(((arr_2 [i_0] [i_0]) ? (arr_0 [i_4] [i_0]) : (arr_9 [i_5] [i_5] [i_5])))))) ? 704213291 : (((arr_15 [17] [i_0] [i_4] [i_5] [i_0] [i_4]) ? (((arr_10 [5]) ? (arr_7 [i_0] [i_0] [22] [16]) : (arr_12 [i_0] [i_0] [i_5]))) : ((0 ? -24 : -24))))));
                        var_19 += (arr_13 [i_0] [i_0] [20] [i_4]);
                        var_20 = (arr_12 [i_0] [i_5] [i_6]);
                    }
                }
            }
            var_21 = ((((((arr_1 [i_4] [i_0]) ? (arr_0 [i_4] [i_4]) : (arr_1 [21] [i_4])))) ? (((arr_4 [i_4] [i_0]) ? (arr_10 [i_0]) : (arr_13 [1] [i_0] [6] [i_0]))) : (((arr_14 [4] [4] [i_4] [i_4]) ? ((-(arr_5 [i_0] [i_0]))) : (((arr_13 [1] [i_4] [i_4] [i_0]) ? (arr_6 [i_0] [i_4] [i_0] [i_4]) : (arr_8 [21] [21] [18] [i_0])))))));
            var_22 |= (arr_15 [i_0] [i_0] [i_0] [i_0] [17] [i_4]);
        }
        var_23 = ((~((~(arr_5 [i_0] [i_0])))));
    }
    var_24 = var_3;
    var_25 = var_2;
    var_26 = (((((var_1 ? var_7 : (~var_5)))) ? var_3 : ((-55 ? 4477079815339149996 : 13969664258370401620))));
    var_27 -= -var_9;
    #pragma endscop
}
