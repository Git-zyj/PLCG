/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 = ((-5193803591686424558 ? var_9 : (max(507904, (arr_0 [i_0] [i_0 + 1])))));
                                arr_11 [2] [i_4] [i_2] [i_3 + 1] = 5193803591686424550;
                                arr_12 [i_0] [i_2] [i_2] = 2437259984326936868;
                                arr_13 [10] [i_2] [i_1] [i_2] [i_0] = (((arr_10 [8] [i_1 + 3] [i_2] [0] [i_2 + 1] [1] [i_3 + 1]) < ((-2437259984326936866 / ((5903830440796790182 ? -1 : 3339183993389544916))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_16 |= var_13;
                                var_17 = arr_1 [2];
                                arr_19 [i_0 - 1] [i_0 - 1] [i_0] [0] [i_0] [i_0] [i_0] |= 5193803591686424542;
                                var_18 = ((max(var_5, (arr_9 [i_1] [i_1] [i_1 + 4] [i_1 - 1] [i_1 + 4] [i_1]))) - (min((arr_9 [i_1] [i_1 + 3] [i_1 + 4] [i_1 - 1] [i_1 - 2] [9]), (arr_9 [i_1] [i_1 + 3] [i_1 + 4] [i_1 - 1] [5] [i_1]))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_19 = (min(var_19, (!-7646481442966267848)));
                        arr_23 [i_2] [0] [0] [i_2 + 2] [i_2] [i_7] = var_0;
                        var_20 = (max(var_20, ((5193803591686424545 ? (arr_14 [i_2 + 2] [i_0] [i_0 - 2] [i_0] [i_0]) : var_13))));
                    }
                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        var_21 = (arr_20 [i_0] [i_1] [i_8 - 1]);
                        var_22 = (~(min(-1, (arr_15 [i_0 - 2] [i_0 - 2] [i_1 - 2] [i_8 + 1]))));
                    }
                    var_23 ^= min((min((!562949953421311), 4073680109317022554)), (max(((var_10 >> (var_11 - 2934291476593141095))), -5193803591686424542)));
                }
            }
        }
    }
    var_24 = var_11;
    var_25 = (max(var_25, var_2));
    #pragma endscop
}
