/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] = (((max((((arr_0 [i_0]) & var_18)), (var_11 != var_17))) > 204));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            arr_9 [i_1] = ((+(((var_10 & 4500) * (arr_6 [i_2])))));
            var_19 *= (~var_13);
            var_20 ^= var_11;
            var_21 = (max(var_21, ((((arr_1 [i_2]) & (((arr_0 [i_1 + 2]) * (max(var_17, var_9)))))))));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        arr_20 [i_1] [i_3] [i_3] [i_1] = ((((((arr_11 [i_1 + 1] [2] [i_1 - 1]) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 + 2])))) ? var_10 : ((max(2040, var_2)))));
                        arr_21 [i_4] [1] [i_4] [i_4] = (!2040);
                    }
                }
            }
            var_22 = ((var_13 + 9223372036854775807) << (((((((12 ? var_7 : var_9)) > 2040))) - 1)));
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 22;i_7 += 1)
            {
                {
                    var_23 = (min(var_23, 61035));
                    var_24 = (arr_12 [i_6]);
                }
            }
        }
        arr_28 [i_1 - 1] = (((((!(arr_12 [i_1 + 2])))) <= var_18));
        var_25 = (((~(arr_27 [i_1 + 2] [i_1 - 1] [i_1 + 2]))));
    }
    for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
    {
        arr_32 [i_8] [i_8] = ((((var_2 * (arr_19 [2] [i_8] [i_8] [i_8 + 2])))));
        arr_33 [i_8 - 1] &= ((~(((-32749 && (arr_12 [i_8 - 1]))))));
        arr_34 [i_8] [i_8] = -8700961326890838683;
    }
    var_26 = var_17;
    var_27 = 3073997168;
    var_28 = var_12;
    var_29 = (((((min(-2, var_8)) * var_6))));
    #pragma endscop
}
