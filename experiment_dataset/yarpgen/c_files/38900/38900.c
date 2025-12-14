/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_12 ? -1 : ((-1 ? 1 : -4633)))));
    var_20 = ((166 ? 1 : -15373));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 = ((var_15 && (((var_5 ? 11849 : ((var_6 ? 32767 : var_18)))))));
        arr_2 [i_0] = ((((~((var_11 | (arr_0 [i_0]))))) < ((min(1, 1)))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                var_22 |= 0;
                arr_8 [i_0] [i_0] [i_0] [6] = ((((((((arr_7 [i_2] [i_1]) ? (arr_3 [7] [i_2]) : var_2))) || (((var_9 ? var_6 : (arr_3 [i_0] [5])))))) ? (((var_8 > ((0 ? 85 : -1))))) : (((((~(arr_0 [i_0])))) ? (((arr_6 [i_0]) ? (arr_0 [i_0]) : var_0)) : var_14))));
            }
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                var_23 = (max(var_23, ((min((((arr_9 [i_0] [i_0] [i_0] [4]) * var_12)), (arr_7 [i_3] [i_1]))))));
                arr_11 [i_0] [i_1] [i_3 + 1] = ((max(((min(var_14, var_3))), ((~(arr_1 [i_3 + 2] [i_1]))))));
                arr_12 [i_3] |= ((var_5 ? ((1 ? 131 : 3840)) : 0));
            }
            for (int i_4 = 2; i_4 < 8;i_4 += 1)
            {
                var_24 += var_2;
                arr_15 [i_0] [i_1] [i_1] [i_4 + 1] = (!var_14);
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_25 = ((((min(((0 ? 10 : 1)), 172))) ? (((!((max(-1, 1)))))) : ((min(var_15, var_10)))));
                        arr_22 [i_6] = 1;
                        var_26 = (min(var_26, ((max((min(((var_16 ? (arr_19 [i_0] [i_5] [i_6]) : (arr_19 [i_5] [i_1] [i_0]))), var_6)), ((1 ? 228 : 1)))))));
                        arr_23 [i_6] = (((arr_3 [i_0] [i_1]) ? 27562 : ((max((arr_14 [i_0] [i_5] [i_6]), (arr_14 [0] [i_1] [i_6]))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
        {
            arr_27 [i_0] = (arr_25 [i_0] [i_7]);
            arr_28 [i_0] [i_7] = (((var_15 ? var_8 : var_9)) <= ((var_12 ? var_16 : (arr_0 [i_0]))));
        }
        var_27 = ((1 ? (((arr_21 [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_0]) : ((var_15 ? var_17 : var_11)))) : (((arr_13 [i_0] [8] [i_0] [i_0]) ? var_18 : var_18))));
    }
    var_28 = var_7;
    var_29 = (max(var_29, (max((1 || 1), 248))));
    #pragma endscop
}
