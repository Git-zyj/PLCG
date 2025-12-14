/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 += (((arr_0 [i_0]) / (((min((-9223372036854775807 - 1), 1)) * (((var_3 ? var_17 : var_15)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_3] [i_3] [4] = (min(4193792, ((var_12 ? ((25 ? var_13 : 1)) : 16))));
                        var_20 = ((-((248 / (arr_7 [i_2])))));
                        var_21 = (arr_8 [i_3] [i_3] [i_0] [i_3] [i_3]);
                        var_22 = (arr_4 [i_0] [i_2] [i_3]);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 17;i_6 += 1)
                {
                    {
                        var_23 = (arr_12 [i_5] [i_6 + 1] [i_6 + 3] [i_6 - 3]);
                        var_24 |= (max(((((~1) ? (arr_3 [i_0]) : var_1))), (max(var_14, var_15))));
                    }
                }
            }
        }
        arr_16 [i_0] = var_7;
    }
    for (int i_7 = 3; i_7 < 24;i_7 += 1)
    {

        /* vectorizable */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_22 [i_8] = ((var_10 ? 4193796 : (arr_21 [i_8] [4])));
            var_25 += (((((arr_20 [i_8] [23] [23]) ? var_0 : 124)) == (arr_18 [i_8])));
        }

        for (int i_9 = 4; i_9 < 24;i_9 += 1)
        {
            var_26 += (arr_21 [24] [i_7]);
            var_27 = ((~(arr_25 [i_7] [i_7])));
        }
        arr_27 [i_7] [i_7] = ((~(max((arr_26 [i_7 + 1] [i_7]), (max(0, (-9223372036854775807 - 1)))))));
    }
    var_28 = (max(var_28, ((((112 % var_13) ? var_0 : (((((1 ? var_0 : 69805794224242688))) ? (~9223372036854775791) : var_7)))))));
    var_29 = ((((((((5 ? 12955 : -1))) ? var_11 : var_6))) ? var_13 : var_13));
    var_30 += (max(((248 ? var_14 : ((251 ? var_11 : 18256304565715166)))), var_11));
    #pragma endscop
}
