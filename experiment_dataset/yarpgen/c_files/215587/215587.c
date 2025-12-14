/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = 1;
    var_12 *= 15029525714780352644;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = ((max(var_4, (!-5720603858472074113))));
                arr_4 [i_0] [13] = ((((((max((arr_2 [14]), (arr_2 [i_0])))) ? 65535 : (arr_3 [i_0] [11] [i_0]))) < (arr_1 [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 += (arr_7 [i_4] [i_4] [i_4] [6]);
                                arr_13 [i_3] [i_3] [i_3] = (((arr_1 [i_3]) ? (arr_12 [i_0] [i_0] [i_0]) : ((((arr_2 [i_4]) < (max(var_8, 3554640325)))))));
                                arr_14 [13] [i_3] [5] [13] [5] [5] [9] = ((var_6 ^ ((max(((max(-2147483624, 319617910))), (arr_9 [i_3] [i_3] [i_3] [i_3] [6] [3]))))));
                            }
                        }
                    }
                }

                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    var_15 += (max(4294967295, 0));
                    var_16 += var_0;
                    var_17 = 4294967295;
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_18 |= (((arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_0]) > (((((arr_17 [i_0] [i_0] [i_0]) || (arr_17 [i_6] [18] [18])))))));
                    var_19 = (max((((-(arr_3 [i_0] [i_0] [6])))), var_4));
                }
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {

                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        arr_25 [i_1] = ((!((133955584 <= (arr_11 [i_0] [i_0] [i_1] [i_0] [i_1])))));
                        arr_26 [i_0] [i_0] [i_0] [i_0] &= var_0;
                        arr_27 [i_0] = (min(1453, (arr_22 [i_8] [i_8] [i_8])));
                    }
                    for (int i_9 = 2; i_9 < 15;i_9 += 1)
                    {
                        arr_30 [i_0] [i_0] [0] = ((((max((arr_5 [i_0] [10] [2]), ((var_5 ? 2489272053 : var_4))))) ? var_6 : ((min((var_9 || -9), (arr_1 [i_0]))))));
                        arr_31 [i_0] [i_0] = (!41576);
                        var_20 = (min(var_20, 128));
                        var_21 = var_9;
                        var_22 |= ((((max((arr_1 [i_1]), (arr_18 [i_0] [i_0] [i_0])))) <= var_9));
                    }
                    var_23 = (min(var_23, (arr_12 [i_7] [17] [i_7])));
                }
            }
        }
    }
    var_24 = var_4;
    #pragma endscop
}
