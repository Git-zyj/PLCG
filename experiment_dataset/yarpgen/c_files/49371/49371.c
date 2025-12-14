/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [12] [5] [12] = ((((min((arr_1 [i_0 - 2]), 1670790154))) || (arr_1 [i_0 - 3])));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_9 [i_0 - 3] [7] [i_2] = ((((((arr_7 [i_2] [i_1] [i_0] [15]) || (arr_1 [i_0]))))) && ((((!33328) ? (((-32767 - 1) ? 63499 : (arr_1 [i_2]))) : 32742))));
                    arr_10 [i_0 + 1] [i_1] [i_1 - 2] [i_0 + 1] = (arr_1 [i_2]);
                    var_19 = (~-1695195069);
                }
                var_20 = (((max(-32742, -148123646))) ? ((-(arr_1 [i_0 + 3]))) : 41062);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            {
                arr_16 [i_3] [1] |= (((arr_4 [i_3] [18] [17]) ? ((((((arr_4 [6] [6] [i_3]) ? var_10 : 218)) <= (!203)))) : ((((max(110, (arr_0 [i_3])))) ? (arr_5 [i_3] [i_3] [i_4]) : ((min(1, var_14)))))));
                arr_17 [i_4 - 1] = ((((!((min(86, (arr_5 [i_3] [i_3] [i_3])))))) ? var_15 : (((~(arr_0 [i_3]))))));

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    arr_22 [i_5] [i_4] [i_3] = (!((max((arr_3 [i_3]), ((((arr_2 [11]) || 17232535102431398973)))))));
                    var_21 = (max(var_21, ((((min((max((arr_8 [i_3] [i_3] [12]), 924244700)), ((0 ? (arr_11 [i_3] [i_3]) : (arr_3 [i_4]))))) * (((((((arr_8 [i_5] [1] [i_5]) || 477136114))) == (arr_0 [i_3])))))))));
                }
            }
        }
    }
    #pragma endscop
}
