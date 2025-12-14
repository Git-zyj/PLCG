/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [14] = min(((((arr_6 [3] [18] [i_2] [i_1 + 2]) && 3982540204))), var_4);
                    arr_8 [i_0] [22] [i_1 + 3] [19] = ((((max((arr_2 [i_0] [i_1 + 1] [i_2]), var_3))) ? ((622103025 ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 1]))) : (((((arr_0 [i_1 + 1]) >= var_8))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_10 = ((18016543917720991674 ? (arr_14 [i_2] [i_1 + 1] [i_2] [i_3] [18] [i_1 - 1] [13]) : (((arr_14 [8] [18] [16] [16] [i_4] [i_1 + 2] [17]) << (var_2 - 5946)))));
                                var_11 = (max(8553679000850935755, 5320900856496775776));
                            }
                        }
                    }
                    var_12 = ((((((arr_13 [i_2] [4] [i_1 + 3] [i_0] [18] [12] [15]) ? (arr_3 [i_1 - 1] [i_0]) : 3398328089))) == (min((arr_15 [i_0] [i_1 + 3] [i_1 - 1] [i_1 + 3]), 1564475914))));
                }
            }
        }
    }
    var_13 = ((((min((min(var_2, var_7)), var_7))) ? (min((max(9251306070107202592, var_2)), 7633529209795236599)) : (var_7 / var_2)));
    var_14 = ((((min((-2630716473395832232 < var_4), var_8))) ? 32753 : var_4));

    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_20 [i_5] [2] = (((((max(10488361301506326050, 49916))) && (arr_13 [i_5] [i_5] [6] [4] [5] [5] [i_5]))));
        var_15 = (max(((min(66, (arr_16 [i_5] [i_5])))), -7795226715747614222));
        arr_21 [i_5] = (max(-60, -30805));
        arr_22 [5] = ((((arr_4 [i_5] [i_5]) ? -3103312713475273891 : var_4)));
    }
    #pragma endscop
}
