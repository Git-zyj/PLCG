/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_5 ^ var_13) != (var_12 || var_11)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = ((~(arr_1 [i_0] [i_0])));
        var_17 = ((-((((arr_1 [i_0] [i_0]) || (arr_1 [i_0] [i_0]))))));
        var_18 = ((((min(var_2, (arr_0 [i_0] [i_0])))) ? (((arr_1 [i_0] [i_0]) + (arr_0 [i_0] [i_0]))) : ((max((arr_0 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_19 += ((((var_2 ? var_10 : 60041))));

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_20 ^= ((-((min(8, (arr_6 [i_0] [i_1] [i_1] [i_3]))))));
                            arr_12 [i_0] [i_1] [i_2 + 2] [i_1] [i_4] = (((-458942397 * 1) ? ((((46353 ? -19 : 19182)) + (arr_1 [i_1 - 1] [i_3]))) : ((var_8 * (18 * 0)))));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            var_21 += (arr_4 [i_0] [i_3] [i_2 + 2]);
                            var_22 += (((var_3 == (arr_6 [i_0] [i_1 - 1] [i_5 - 1] [i_3]))));
                            var_23 = (!0);
                            var_24 = (((((-(arr_6 [i_1] [i_1] [i_3] [i_5])))) ? (((arr_7 [i_1 + 1] [i_1] [i_5 + 1]) ? 127 : (arr_1 [i_0] [i_0]))) : 68));
                            var_25 = (max(var_25, (((~(arr_2 [i_2 - 1] [i_0] [i_3]))))));
                        }
                        for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            arr_18 [i_6] [i_1] [i_2] [i_1] [i_0] = ((~((-(((!(arr_9 [i_0] [i_1] [i_1 + 1] [i_2] [i_3] [i_6]))))))));
                            arr_19 [i_1] [i_1] = (~255);
                            arr_20 [i_0] [i_1 + 1] [i_2] [i_1] [i_6] = ((19183 || ((((~742201910) ? (arr_10 [i_0] [i_1 - 1] [i_2] [i_1] [i_6] [i_1 + 1]) : var_7)))));
                        }
                    }
                }
            }
        }
    }
    var_26 &= (max((((var_2 ^ var_6) | (var_9 ^ var_4))), (46353 >> 18)));
    var_27 = (max((min(var_6, (~89))), var_7));
    #pragma endscop
}
