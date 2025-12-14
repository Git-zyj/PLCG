/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 17;i_3 += 1)
                {
                    {
                        var_19 = (arr_11 [9] [i_1] [i_2]);

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_20 += (((((-1892014102819032451 ? (-2147483647 - 1) : (arr_12 [i_0] [i_1] [i_2] [i_1] [i_1] [4] [i_4])))) ? 1892014102819032434 : (min(1152917106560335872, 1))));
                            arr_15 [i_1] [i_1] [i_2] [i_4] = (((arr_6 [i_1] [i_2] [i_3]) ? (((((arr_4 [i_0]) ^ 1892014102819032453)) % 1892014102819032450)) : (min((min(637058997316335801, (arr_3 [i_0] [i_0]))), (arr_7 [i_2] [10] [i_0])))));
                        }
                        var_21 = (min(-var_10, ((~(var_16 % var_17)))));
                        var_22 = -1892014102819032452;
                    }
                }
            }
            arr_16 [i_1] = ((((((arr_4 [i_0 + 1]) ? (arr_4 [i_0 - 1]) : (arr_4 [i_0 - 1])))) ? ((min((arr_4 [i_0 - 1]), var_16))) : (arr_4 [i_0 + 1])));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
        {
            var_23 = (max(var_23, (arr_1 [i_0] [i_5])));
            var_24 = (!var_11);
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_25 -= 637058997316335791;
                        var_26 = ((~(arr_2 [i_5] [i_5] [5])));
                        var_27 = ((~(((!(arr_23 [i_0] [i_5] [i_6] [i_7]))))));
                    }
                }
            }
            var_28 = (!var_18);
        }
        for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
        {
            arr_31 [i_0] |= arr_27 [i_0 - 1] [i_8] [i_8] [i_8];
            arr_32 [i_0] = (var_1 * var_8);
        }
        for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
        {
            var_29 |= ((((((min(1, (arr_10 [0] [i_9])))) ? 9223372036854775807 : 1487543152)) ^ 32413));
            arr_35 [i_0] [i_0] = ((+(max((var_7 / var_2), ((var_9 ? (arr_28 [15] [i_9]) : (arr_29 [i_0 - 1] [i_0 - 1] [i_0])))))));
            var_30 = var_12;
            arr_36 [i_0] = (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0 + 1]);
        }
        var_31 = ((((arr_5 [8]) / var_13)));
    }
    var_32 = ((var_7 ? var_2 : ((var_10 ^ (max(var_7, 796635799))))));
    #pragma endscop
}
