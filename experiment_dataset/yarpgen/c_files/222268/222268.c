/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((min(((1 ? 1 : var_8)), var_3)) > var_2);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_8 [i_0] = ((var_7 | ((((min((arr_7 [i_3] [i_2] [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_1] [i_0] [i_3])))) * (min((arr_6 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3]), 176))))));
                        var_13 += -var_0;
                    }
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_14 [i_4] = (arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 2] [i_4 + 1] [i_4 - 1] [i_4 - 2]);
                            arr_15 [i_0] [i_4] [i_4] = (arr_7 [i_0] [i_1] [i_2] [i_4] [i_5]);
                            var_14 *= var_0;
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_19 [i_0] [i_1] [i_4] = ((((((min(var_6, -30))) ? 3996 : ((~(arr_4 [i_0])))))) ? (((~-39) ? ((~(arr_6 [i_0] [i_1] [i_2] [i_1] [i_2] [i_6]))) : (arr_11 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_6] [i_4 + 1]))) : (((~(arr_17 [i_0] [i_1] [i_2] [i_4 + 1] [i_6])))));
                            var_15 += (max(((-(((arr_16 [i_0] [i_0] [i_2] [i_4]) ? var_10 : (arr_12 [i_2] [i_2] [i_2] [i_4 - 1] [i_4 + 1]))))), (arr_2 [i_4 + 1])));
                            arr_20 [i_4] [i_1] [i_2] [i_4] [i_6] = (((((18446744073709551615 ? 1476466081 : 1)))) ? (~var_0) : (((((var_11 ? (arr_6 [i_0] [i_1] [i_1] [i_4] [i_1] [i_4]) : var_0))) - (arr_3 [i_0] [i_0] [i_2]))));
                        }
                        var_16 = ((1 == ((-((var_11 + (arr_3 [i_0] [11] [11])))))));
                    }
                    var_17 |= (((15 ? (arr_3 [i_0] [i_0] [4]) : (arr_3 [i_0] [i_1] [i_2]))));
                    var_18 = (min(var_18, ((min(((~(arr_4 [i_0]))), ((17541943882487349023 ? (arr_4 [i_0]) : (arr_4 [i_0]))))))));
                    arr_21 [i_0] [i_1] [i_0] [i_2] = var_10;
                }
            }
        }
    }
    #pragma endscop
}
