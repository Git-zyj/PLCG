/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    var_18 -= var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                var_19 = min(((((arr_3 [i_1 - 1]) != var_11))), (min(var_16, var_1)));
                                var_20 = (max(var_20, (((var_2 > (((~(4294967295 < var_0)))))))));
                                arr_14 [i_0] [i_0] = var_11;
                            }
                            arr_15 [i_0] [i_0] [i_0] [1] [i_0] = (min((((!(arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))), (min((arr_10 [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 + 1]), 536870912))));
                            var_21 = ((~(32762 * 243)));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_7 [i_1] [i_1] [i_1] [i_1 - 2]);
                        }
                    }
                }
                var_22 = var_16;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 8;i_6 += 1)
                    {
                        {
                            var_23 = (((min(var_0, var_14)) || (arr_11 [i_6] [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1])));

                            for (int i_7 = 0; i_7 < 11;i_7 += 1)
                            {
                                var_24 = (((((~(arr_1 [5])))) ? ((var_6 ? (arr_10 [i_6 + 1] [i_6 + 2] [i_6] [i_6]) : (arr_19 [i_6 + 2] [i_6 - 3] [i_6] [i_6]))) : (((((max((arr_17 [i_0] [i_0]), (arr_18 [i_0]))))) - (min(var_5, (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                var_25 = ((((((arr_3 [i_6 + 2]) | (arr_3 [i_6 + 3])))) < (max((arr_3 [i_6 + 3]), var_7))));
                            }
                        }
                    }
                }
                var_26 = var_7;
            }
        }
    }
    var_27 = (max(var_27, ((((((var_7 / (var_13 ^ 4294967295)))) ? var_13 : var_1)))));
    var_28 = (max(276, 43));
    #pragma endscop
}
