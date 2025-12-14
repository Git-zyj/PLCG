/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_15;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_18 = ((var_0 && ((((arr_8 [i_0] [i_3 + 1] [i_2] [i_2 + 3]) ? (arr_8 [i_0] [i_3 + 1] [i_2 + 1] [i_2 + 3]) : 334)))));
                            var_19 *= (max(18168048298026067192, ((((((2124714066 ? 235 : var_7))) ? (arr_12 [i_4] [i_3] [i_2 + 3] [i_2] [i_1] [i_0] [i_0]) : 890341255)))));
                            var_20 = 18074360577443647683;
                            var_21 = (max(var_21, ((((min(890341255, (arr_12 [i_3] [i_4] [i_3] [i_3 + 2] [i_3] [i_3 - 1] [i_3 - 1]))) + ((((8191 ? (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]) : var_16)) + (((arr_4 [i_0]) ? var_12 : var_16)))))))));
                        }
                    }
                }
            }
            var_22 = var_4;
            arr_13 [i_1] [i_0] [i_1] = var_2;
        }
        var_23 = (min(var_23, (!var_11)));
        var_24 += (min(((18446744073709551615 ? 2149997560 : var_2)), var_1));

        for (int i_5 = 2; i_5 < 9;i_5 += 1) /* same iter space */
        {
            arr_18 [i_5] = ((((~(arr_9 [4] [i_0] [i_5] [i_5 + 2] [i_0] [i_0] [i_0]))) % (max(3404626037, (arr_9 [i_0] [i_0] [i_0] [6] [i_5] [i_0] [i_5 + 1])))));
            var_25 = (max((arr_16 [i_0] [i_0] [i_0]), (arr_11 [i_0] [1] [4] [i_0] [i_0])));
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 9;i_6 += 1) /* same iter space */
        {
            var_26 = (min(var_26, (12 > 278695775683484423)));
            var_27 = (max(var_27, ((((arr_5 [i_6 + 1] [i_0]) ? (arr_1 [i_6 + 2]) : 890341258)))));
        }
    }
    var_28 = (max(var_28, (max((min(((max(-23968, 1073725440))), ((var_7 ? var_7 : var_14)))), -18883))));
    #pragma endscop
}
