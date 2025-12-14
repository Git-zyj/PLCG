/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_17 [8] [i_0] [i_2] [i_3] [i_3 - 2] [i_4] = (min((min(127, -245640484)), (63488 ^ 245640492)));
                                arr_18 [i_0 + 3] [i_1] [i_0] [i_3] [i_3] [i_0 + 3] = (arr_10 [i_4 - 1] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_19 [4] [i_1] [14] [i_3] [i_4] &= (min(((max(245640455, 54043195528445952))), -121));
                                arr_20 [8] [i_1] [i_0] [i_3] [i_0] |= (((((min(-176371979, (arr_8 [i_1] [i_3] [i_2] [i_1])))) ? ((((((-127 - 1) + 2147483647)) >> 17))) : (min((-32767 - 1), (arr_16 [8] [i_2] [i_3] [i_4]))))));
                            }
                        }
                    }
                }
                arr_21 [i_0] = (max(((max((arr_16 [6] [i_1] [i_1] [i_1]), (((var_5 ? var_3 : (-32767 - 1))))))), (max(18, (((arr_13 [1] [12] [i_1] [i_0]) >> (74 - 48)))))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_18 += ((min(94, (arr_11 [i_5 + 1] [i_5 + 1] [i_6] [i_6] [i_5] [i_5]))));
                            arr_28 [i_0] = (((max((arr_7 [i_0] [i_0] [i_0 - 1]), (arr_7 [i_0] [i_0] [i_0 - 2]))) ? (((arr_26 [i_0] [i_0]) ? var_2 : (arr_26 [i_0] [i_0]))) : (((min(-122, (arr_26 [i_0] [i_0])))))));
                            arr_29 [i_0] [i_1] [i_0] = ((((min((min(962381938591486432, 9007199254740864)), (var_2 && var_7)))) ? (var_0 <= var_17) : (arr_0 [i_5 - 1] [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_19 += (min(((var_16 ? (((max(var_6, var_17)))) : var_14)), var_5));
    var_20 = (min(var_2, 13447160061835136620));
    var_21 -= 144115188075855744;
    #pragma endscop
}
