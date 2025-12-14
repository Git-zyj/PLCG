/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_6 + (((var_9 ? var_0 : (((0 ? 170 : 1))))))));
    var_15 = (-(((((max(3139305067, 1))) || var_8))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_2] [5] [5] = (min(((~(max(var_7, var_8)))), (((arr_2 [i_0]) | (((max((arr_1 [i_0 + 1]), var_12))))))));
                    var_16 -= ((((max(var_12, (((arr_1 [3]) <= 9049107032060195272))))) >> (((arr_4 [i_0 - 1] [0] [i_1]) - 11415282474731076911))));
                    var_17 = (((~4292870144) ? (((-53 < 74) ? -53 : ((9786627940446323601 << (21297 - 21292))))) : -53));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_11 [7] [i_2] [8] [5] &= ((1341659129 ? 182 : 1));
                        var_18 *= (((-var_8 + -74) % (((((((arr_3 [2] [i_3]) ? (arr_6 [i_0] [7] [i_2] [i_3]) : 1))) ? ((var_1 ? 1 : -1)) : (arr_1 [i_0 - 1]))))));
                        var_19 = (~var_0);
                    }
                    for (int i_4 = 2; i_4 < 8;i_4 += 1)
                    {
                        arr_16 [2] = (((var_9 - (min(2199019061248, 1)))) >> (((max(-58105, (44238 + var_11))) - 26141)));
                        var_20 = (231 & 26720);
                    }
                }
            }
        }
    }
    #pragma endscop
}
