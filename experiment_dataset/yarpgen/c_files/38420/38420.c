/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_12 [13] [i_2] = var_2;
                    arr_13 [i_0] [i_0] [9] = (((arr_0 [i_0 - 2]) ? ((max((arr_2 [i_1]), (arr_3 [i_0 + 2] [i_1])))) : (((!(arr_5 [i_0 + 3]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = max(-103, (((3299897201 ? 0 : 29360128))));
                                var_20 = ((!((((arr_5 [i_2]) ? var_4 : (arr_5 [i_1]))))));
                                var_21 = ((((var_13 ? 0 : (arr_1 [i_0 + 3] [i_4 + 2])))) ? (arr_1 [i_0 + 3] [i_4 + 2]) : ((14893 ? 157258290 : 23)));
                                arr_21 [i_4] [4] [10] [i_3] [i_3] [i_3] = (((arr_1 [i_0] [i_0]) ? (((((var_6 ? var_14 : var_10))) ? var_10 : (arr_15 [i_0] [i_0] [7] [11] [i_3] [i_4 - 3]))) : ((var_17 ? var_17 : var_16))));
                            }
                        }
                    }
                    var_22 ^= ((((max(var_12, (arr_7 [i_0 + 3])))) ? (((arr_7 [i_0 + 3]) << (((arr_7 [i_0 + 2]) - 467933252)))) : (arr_7 [i_0 - 1])));
                }
            }
        }
    }
    var_23 = var_7;
    #pragma endscop
}
