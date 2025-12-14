/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 = ((461751278964099731 ? ((((arr_2 [i_2 + 3]) - (arr_2 [i_2 - 3])))) : (((arr_4 [i_2 + 3] [i_0 - 3]) ? (arr_3 [i_0 - 2] [i_0]) : (arr_4 [i_2 + 3] [i_0 + 1])))));
                    arr_8 [i_2] [i_1] = 11;
                    arr_9 [i_0 - 3] [i_2] [i_2] = ((~((461751278964099731 ? (arr_1 [i_1]) : 11))));
                    arr_10 [i_0] [i_1] [i_2] = min((!461751278964099741), ((461751278964099731 && (arr_6 [i_0]))));
                }
            }
        }
        arr_11 [i_0] = (((((arr_7 [1] [i_0]) ? 26 : ((32 ? 26 : -18)))) >> var_3));
        arr_12 [i_0] [i_0 + 2] = (((((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_3 [i_0 - 4] [i_0])))) ? (arr_5 [i_0 + 1]) : (-5 && var_12)))) ? ((((arr_7 [0] [i_0 - 4]) < (arr_0 [i_0])))) : (((-29 < (arr_1 [i_0 + 1]))))));
        var_20 = (((((min((arr_0 [i_0]), var_6))) ? (arr_2 [i_0 - 2]) : 17984992794745451884)) / 2004244867);
        arr_13 [i_0] |= ((((max((arr_0 [i_0 - 2]), (arr_2 [i_0 + 1])))) / ((461751278964099732 ? 4 : (max(4, 17984992794745451884))))));
    }
    var_21 = var_13;
    var_22 -= (((((((((-1843163127 + 2147483647) << (10 - 8)))) ? var_4 : (~var_18)))) ? (((~1) ? (~10627) : (54918 & var_18))) : var_4));
    #pragma endscop
}
