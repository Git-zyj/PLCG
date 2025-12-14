/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 ^= ((((((arr_0 [i_0 + 2] [i_0 - 1]) ? (arr_0 [i_0 - 1] [i_0 + 1]) : var_2))) ? -18394 : ((-(arr_0 [i_0 + 1] [i_0 + 3])))));

                    for (int i_3 = 3; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        var_21 = (max(var_21, (((~(arr_5 [i_0] [i_1] [i_2 - 3] [i_3]))))));
                        arr_9 [6] [i_2] = (((((var_5 + (!1093498094)))) ? ((-((-(arr_5 [i_0] [i_0] [i_0 + 3] [18]))))) : (((arr_3 [i_0] [i_2 - 1] [i_2 - 2]) | (max(var_6, -1241978620))))));
                        arr_10 [i_2] [i_3 + 2] [i_2] [i_3] = ((1 ? var_18 : (((arr_1 [i_3] [7]) ? var_13 : 6292626817346892237))));
                    }
                    for (int i_4 = 3; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_2] [i_2] [i_2] = ((min((((!(arr_1 [1] [12])))), (min((arr_7 [i_2 + 1] [16] [i_2] [i_2]), var_17)))));
                        arr_14 [i_2] = ((max(1, 1883410456)) <= ((((arr_0 [i_0 - 1] [i_0 + 1]) ? (arr_5 [i_0 + 3] [i_0 + 3] [i_0 - 1] [i_2 - 1]) : var_15))));
                        arr_15 [i_2] [i_2] = ((((-255 ? (arr_2 [i_2 - 1] [i_0 + 2]) : (max(var_16, var_7)))) == ((((!0) ^ (((var_18 < (arr_8 [i_2])))))))));
                        arr_16 [i_2] = ((0 << (-2114064209 + 2114064224)));
                    }
                }
            }
        }
    }
    var_22 ^= var_0;
    var_23 = ((2114064208 != (min(var_4, -6305370969388789971))));
    #pragma endscop
}
