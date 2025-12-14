/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_4 ? var_6 : (!122)));
    var_13 = (((~((max(var_0, var_11))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = ((var_4 ? (arr_2 [i_0]) : var_1));
        var_14 *= (((((((max((arr_1 [0] [0]), 4964856986240946074))) ? ((min((arr_1 [10] [10]), (arr_0 [i_0])))) : -7))) ? -123 : (((arr_2 [2]) ? -117 : 5859021695581650337))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = (min((max((((arr_2 [i_0]) / var_1)), (!var_7))), (arr_0 [i_0])));
            var_15 = (!var_3);
            arr_8 [i_0] = 198;
            var_16 = -4964856986240946074;
            var_17 ^= ((var_5 ? (((arr_2 [i_1]) ? var_9 : ((((arr_5 [i_0] [i_1] [i_1]) << (((arr_0 [i_0]) + 81))))))) : 122));
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_19 [i_2] [i_2] [i_4] [i_5] = ((~(arr_13 [i_4] [i_4 - 3])));
                        var_18 = (!var_8);
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        arr_22 [i_4] [i_3] [i_6] [i_4] [i_6] = 106;
                        var_19 -= (((((~(arr_21 [i_6] [i_4] [i_3] [i_3] [i_2] [i_2])))) ? var_1 : var_8));
                    }
                    var_20 &= arr_20 [i_3] [i_2];
                }
            }
        }
        var_21 &= (arr_12 [i_2] [i_2] [i_2]);
        var_22 = ((var_7 || (arr_9 [i_2])));
        arr_23 [i_2] [i_2] = ((~(arr_13 [i_2] [i_2])));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
    {
        var_23 = (max(var_23, (((((((min(-107, var_10))) ? 18 : 97))) >= (min(((62 ? -123 : (arr_13 [i_7] [i_7]))), ((max(115, (arr_11 [i_7] [i_7] [i_7]))))))))));
        arr_27 [i_7] [i_7] &= ((3526 * ((max(127, 96)))));
        var_24 = (min(var_24, ((((arr_10 [i_7] [i_7]) ? (((((((var_4 ? var_2 : var_0))) && var_3)))) : ((-((var_2 ? (arr_11 [i_7] [i_7] [i_7]) : 255)))))))));
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
    {
        var_25 = (((((((min((arr_20 [i_8] [i_8]), (arr_20 [16] [i_8])))) ? var_5 : (var_4 < var_7)))) ? ((var_9 ? var_5 : 69)) : (((!(arr_18 [i_8] [i_8] [i_8] [i_8] [i_8] [13]))))));
        var_26 = (max(var_26, (min((max(((((arr_11 [i_8] [i_8] [19]) ? 2 : var_7))), (arr_9 [i_8]))), (((((194 ? 2065544873 : 69))) ? (arr_10 [i_8] [i_8]) : (arr_14 [i_8] [i_8] [i_8])))))));
        arr_31 [i_8] &= var_6;
    }
    #pragma endscop
}
