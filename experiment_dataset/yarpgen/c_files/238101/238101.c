/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_14 = (((!var_7) ? (max((~0), ((-104 ? 2199023255551 : -86)))) : (arr_7 [i_0] [i_2] [i_2 + 1])));
                                var_15 = (min(var_15, ((((max(var_8, 4460997697332006388)) | var_13)))));
                                var_16 = (max(var_16, 2348435808755094911));
                                arr_11 [i_4] [i_2] [i_2] [i_2] [i_0] = (var_1 ^ var_13);
                                var_17 = (max(var_17, ((((((((arr_8 [i_0]) - (arr_10 [i_0] [i_1] [i_2] [i_3] [0]))) + (arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 2]))) / (arr_6 [i_0] [i_1] [i_0]))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_18 = (~(((((~(arr_13 [i_0] [i_0] [i_0] [i_5])))) ? 7484279427987116335 : (var_6 | var_9))));
                        var_19 -= (((arr_7 [i_2 + 1] [i_1] [i_2 + 1]) + (min((var_5 + var_10), var_7))));
                        var_20 = (arr_10 [i_0] [10] [i_2 - 1] [i_2 - 2] [i_2 - 2]);
                        var_21 = (((arr_5 [i_0] [i_1] [i_2]) ? var_9 : 1));
                    }
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        var_22 = (((((~(((arr_17 [i_0] [i_2] [i_2] [i_6 - 1] [i_0]) ? 255 : (arr_2 [i_0])))))) || ((((arr_1 [7]) ? (var_4 + var_3) : (var_3 - var_11))))));
                        var_23 = min((((((arr_7 [i_0] [i_2] [i_2]) ? var_3 : (arr_2 [i_0]))))), (((max(var_2, 2)) & (~var_4))));
                        arr_18 [i_0] [i_0] [i_2] [i_0] [i_0] = 65515;
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, var_6));
    var_25 = var_5;
    var_26 = (((((((max(var_2, var_5))) ? ((var_10 ? var_10 : var_11)) : var_12))) ? ((((1 / var_1) ? var_0 : ((1 ? -20414 : 34))))) : (((var_13 - var_3) + -var_10))));
    #pragma endscop
}
