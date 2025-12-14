/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [18] [i_0] = ((!(arr_2 [i_0])));
        var_20 += ((~((-(arr_2 [i_0])))));
        arr_4 [i_0] = ((((~((1280035976 | (arr_1 [i_0]))))) == (~var_14)));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_21 = ((((((arr_6 [i_1] [i_1]) < 1))) + (max(((202 ? var_4 : (arr_2 [i_1]))), (var_2 < 1)))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_17 [i_2] [i_3] [i_4] = (((-(arr_1 [i_1]))) / (~var_1));
                        var_22 = (min(var_22, ((((arr_13 [i_1] [i_2] [i_1]) ? (arr_13 [i_4] [i_4] [6]) : (arr_5 [i_1] [i_1]))))));
                        arr_18 [i_1] [i_3] [i_1] [i_1] = (arr_12 [10] [10] [i_3] [i_3]);
                        var_23 -= (((~var_0) > (arr_10 [i_1])));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_21 [i_5] = var_14;
        arr_22 [i_5] [i_5] = var_12;

        /* vectorizable */
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            var_24 -= ((~(arr_13 [i_6 + 1] [i_6 + 1] [i_6 + 1])));
            var_25 = (max(var_25, (((((var_5 ? (arr_16 [0] [0] [0] [i_6]) : var_2)) <= (((arr_16 [13] [i_6] [i_5] [i_5]) ? 1 : (arr_7 [i_5] [i_5] [i_5]))))))));
            var_26 = (((~1354826081) | (arr_19 [i_6 + 1] [i_6 + 1])));
        }
        arr_25 [i_5] = (((arr_20 [i_5]) ? ((((max((arr_15 [i_5] [i_5]), (arr_2 [1])))) ? (1 > var_15) : (((var_14 || (arr_23 [i_5] [1])))))) : ((min((min(1961, -30)), 1)))));
    }
    #pragma endscop
}
