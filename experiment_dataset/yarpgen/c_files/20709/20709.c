/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (min(var_4, var_16));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_3] [i_3] = ((((-(9223372036854775807 & var_2))) - var_16));
                        var_18 = (min(var_18, ((min((arr_5 [i_2 - 2] [i_0 - 1]), ((~(arr_5 [i_2 + 1] [i_0 + 1]))))))));
                        var_19 *= ((!((!(arr_4 [i_1] [i_2 - 2] [i_3 - 1])))));

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            arr_14 [i_3] [i_3] [i_1] [i_2] [i_1] [i_3] = var_4;
                            var_20 = (max((~1), (((var_10 != var_10) ? ((1 / (arr_12 [8] [i_1] [i_2] [16] [i_4]))) : ((65535 ? var_5 : 1))))));
                            var_21 = ((((((9223372036854775786 != 0) / (arr_6 [i_3 + 1] [i_3 + 1] [i_3 + 1])))) ? 1 : var_11));
                            var_22 += ((((max((arr_2 [i_0 + 1]), (arr_2 [i_0 - 1])))) ? (~var_1) : (arr_9 [i_0 - 1] [i_0] [i_0] [i_0] [i_3 + 1])));
                        }
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            arr_17 [i_2 + 1] [i_3] [i_2] [i_2] [i_2] [i_2 + 1] = ((0 ? 0 : 15));
                            arr_18 [i_3] [i_1] [i_2 - 2] [i_3] [i_5] = min(688569556, 3096450538);
                            var_23 = (max(var_23, (arr_13 [i_0] [i_1] [18] [i_3 + 1])));
                            var_24 = (((((arr_5 [i_2 - 2] [i_3 - 1]) ? ((((arr_15 [i_0] [i_0] [0] [i_3] [i_5]) ? var_5 : (arr_15 [i_1] [17] [17] [i_3] [i_5])))) : (arr_2 [i_2 - 1]))) >> (((max((min(var_2, var_9)), (-4815275790038435703 >= -61802768466702411))) - 38969))));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_25 = (arr_3 [i_0 + 1]);
                            var_26 -= -4815275790038435729;
                        }
                    }
                    var_27 = ((-(((arr_19 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_1] [i_1]) ? var_7 : var_2))));
                    var_28 = (max(var_28, ((max((((((4294967295 ? (arr_4 [i_0] [i_0 - 1] [i_0]) : (arr_1 [i_2 - 2])))) ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : ((var_3 ? var_6 : (arr_6 [i_0] [15] [i_2]))))), (max((arr_2 [i_1]), (((var_16 > (arr_3 [i_0])))))))))));
                }
            }
        }
    }
    #pragma endscop
}
