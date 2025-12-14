/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    var_15 *= (arr_0 [0]);
                    arr_10 [i_0] [i_0] [1] [11] = ((((((arr_1 [4]) * var_2))) ? (max(17247087979010682841, (arr_4 [5] [i_2 + 1] [i_2]))) : (arr_1 [6])));
                    arr_11 [i_0] [i_2] = ((!(arr_7 [5] [i_2] [i_2 - 1] [i_2 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_2] = ((6431675738653216121 + ((((arr_3 [i_4 - 2]) ? var_3 : (arr_8 [4] [i_2 - 1]))))));
                                var_16 = (max(var_16, ((((((~(arr_8 [i_0] [i_1])))) < ((((44 & var_6) ? ((var_6 >> (88 - 72))) : 150))))))));
                            }
                        }
                    }
                }
                var_17 = (((arr_0 [0]) ? (arr_9 [12] [i_1] [12]) : (max(232, (~var_10)))));

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_18 *= 133;
                    var_19 = (arr_13 [i_0] [i_0] [i_0] [i_0]);
                    var_20 = (min(var_20, (((((((614164089 ? 1 : var_11))) ? var_7 : (arr_2 [i_0] [i_1])))))));
                }
                var_21 = ((((((((arr_8 [i_0] [i_0]) ? (arr_20 [9] [i_1]) : (arr_6 [i_0] [11])))) ? (var_7 / -4414689826886744236) : var_1)) >> ((((max(0, var_5)) >= var_3)))));
                var_22 = (max(((+(((arr_14 [i_0] [i_0] [i_1] [i_1] [11]) ? var_6 : (arr_5 [9]))))), (19069 - -614164090)));
            }
        }
    }
    var_23 = ((var_4 ? -23047 : 616));
    var_24 = var_5;
    #pragma endscop
}
