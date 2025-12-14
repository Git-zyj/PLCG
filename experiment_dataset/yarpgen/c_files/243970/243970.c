/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 |= (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
        arr_2 [i_0] = (((~var_0) ? (~var_0) : ((~(arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_18 -= var_6;
        var_19 = (min(var_19, ((min(62735, var_4)))));
        arr_5 [i_1] = ((var_14 ? ((+((min((arr_4 [i_1]), 8191))))) : (arr_4 [i_1])));
        arr_6 [i_1] [i_1] = (min(-var_4, (arr_4 [i_1])));
        arr_7 [i_1] = ((((-(arr_4 [i_1]))) & ((min(var_3, 5)))));
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_20 &= ((var_0 ? (((arr_10 [i_2 - 1]) ? (((arr_10 [i_2 + 1]) ? -3 : var_5)) : (arr_11 [i_2 + 1] [i_2 - 1]))) : ((((arr_9 [8]) ? var_8 : var_1)))));

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_21 &= ((((((arr_8 [14] [14]) ? (arr_8 [2] [2]) : (arr_8 [4] [4])))) ? var_3 : var_8));

            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
            {
                arr_17 [i_2] = (min((((var_16 <= (((arr_10 [i_3]) << (((arr_16 [i_2 + 1] [i_3] [i_4] [i_4]) - 14244145216681753901))))))), ((~((min(var_3, var_13)))))));
                var_22 = (max(var_22, (((-(arr_11 [i_2 + 1] [i_2]))))));
                var_23 = (max(var_23, ((((min((arr_9 [1]), (arr_12 [i_3] [14]))) + (((((var_3 ^ (arr_12 [i_2] [16])))) ? (arr_13 [14] [14] [14]) : -var_14)))))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_24 = (arr_12 [i_3] [i_5]);
                            var_25 = ((var_0 ? (((-127 - 1) % 128)) : (((arr_18 [i_2] [i_5 + 1] [i_6] [i_5 + 2] [i_6]) ? 19337 : (((arr_21 [i_6] [i_5] [i_4] [i_3] [i_3] [i_2] [i_2]) ? var_9 : var_3))))));
                            arr_23 [i_2] [i_3] [i_3] = (min(var_14, var_6));
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
            {
                var_26 = arr_27 [i_2] [i_2 - 1] [i_2];
                var_27 += (((arr_19 [i_2] [i_2] [i_3] [i_2] [i_7] [i_7]) ? 1 : (((((var_3 ? var_15 : 255))) ? ((min((arr_9 [14]), -31933))) : (38020 - 38020)))));
            }
            var_28 = (!38020);
            arr_28 [i_3] [i_2] = (((arr_27 [i_2 + 1] [i_3] [i_2]) ? var_3 : (arr_25 [i_2] [i_2] [i_2])));
        }
        arr_29 [i_2] [i_2 + 1] = (arr_11 [i_2 + 1] [i_2 + 1]);
        arr_30 [i_2] = ((-(var_2 * var_11)));
    }
    for (int i_8 = 1; i_8 < 19;i_8 += 1) /* same iter space */
    {
        var_29 = (max(var_29, ((((((((min(var_15, var_1))) || 38027))) < (arr_13 [2] [i_8] [i_8]))))));
        var_30 = (min(1474518992379250488, var_14));
        var_31 = (max(var_31, var_8));
    }
    var_32 = var_13;
    var_33 |= (max(var_0, var_2));
    #pragma endscop
}
