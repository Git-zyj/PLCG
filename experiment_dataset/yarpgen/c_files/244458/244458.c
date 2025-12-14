/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (min((arr_1 [i_1] [i_1]), ((44778 << (1936255605 - 1936255602)))));
                var_20 = (max(var_20, (arr_5 [i_0] [1] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_21 += (((~1) ? var_6 : (arr_3 [i_0] [i_0] [1])));
                            arr_11 [4] [9] [9] [9] = (((arr_1 [i_2] [i_1]) ? (min((arr_6 [i_3 - 2] [i_3 - 1] [i_3 - 1]), ((((arr_10 [i_0]) > (arr_5 [i_0] [i_1] [11])))))) : 1));
                        }
                    }
                }
                arr_12 [10] [1] = 2358711706;
                var_22 = (min(var_22, ((min((arr_7 [1] [i_1] [i_1] [i_1]), ((var_18 ? (arr_4 [i_1]) : (arr_7 [i_0] [i_0] [i_1] [i_0]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_23 = (min((arr_4 [i_5]), var_8));
                                var_24 = 2358711691;
                                arr_26 [i_7] [i_5] [6] [7] [i_5] [i_5 + 1] [i_5] = -32767;
                            }
                        }
                    }
                    var_25 = (((arr_24 [1] [4] [i_6] [i_6] [i_5]) ? (max(((((arr_20 [i_6] [i_6]) ? 1936255599 : 45086))), 274877382656)) : 1));
                }
            }
        }
    }
    #pragma endscop
}
