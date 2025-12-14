/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    var_13 = ((var_1 ? (((~((max(38, var_5)))))) : (max((min(-115, 2988668796503606573)), var_1))));
    var_14 = -2988668796503606574;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = ((((1041615181425495692 ? ((var_1 ? var_4 : 49)) : (arr_6 [i_0] [i_1])))) ? (((((~(arr_4 [i_0] [i_0] [i_0])))) ? 3896026808238240202 : ((((var_10 && (arr_2 [i_0]))))))) : (arr_1 [i_0]));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 ^= ((((((arr_11 [i_4] [i_3] [i_3 + 3] [i_4] [i_4]) ? (arr_11 [i_0] [i_1] [i_3 + 3] [i_3] [i_0]) : (arr_11 [i_2] [i_3] [i_3 + 1] [2] [i_4])))) ? (arr_6 [i_2] [i_4]) : (arr_2 [i_3])));
                                var_17 = 0;
                            }
                        }
                    }
                    var_18 = (~(((arr_6 [i_0] [i_1]) ? (arr_6 [i_0] [i_2]) : (arr_0 [i_1]))));
                }
            }
        }
    }
    var_19 = (min((min(-8670480980689796665, 0)), var_2));
    #pragma endscop
}
