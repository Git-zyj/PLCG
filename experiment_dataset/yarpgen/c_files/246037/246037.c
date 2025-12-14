/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(9193053608085347957, 250));
    var_17 -= var_14;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = (((arr_0 [i_0]) > (((0 >> (((arr_1 [i_0]) - 13235042680182896686)))))));
        var_19 *= (arr_0 [i_0]);
        var_20 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                var_21 = (min(var_21, ((((arr_3 [i_3 - 1]) ^ 5)))));
                var_22 |= ((1 * (((-9223372036854775807 - 1) ? (arr_3 [i_1]) : (arr_5 [i_1])))));
                var_23 = ((var_7 ? 1044480 : -7));
                var_24 = var_2;
            }
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                var_25 += (!4629124315178705339);
                var_26 &= (~9193053608085347957);
            }
            var_27 = (((!var_15) && (0 || 7)));
            arr_12 [i_1] [i_2] |= (arr_10 [i_1] [i_1]);
            var_28 *= ((!(~1729300464038291627)));
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
        {
            var_29 -= (6780250682292125466 | 147);
            var_30 = (max(var_30, ((((0 ? 318981766 : 250))))));
            var_31 = 40008;
            var_32 = (max(var_32, ((((-32767 - 1) ? 111 : 1)))));
        }
        arr_16 [i_1] = ((~(arr_4 [i_1] [i_1] [11])));
        arr_17 [i_1] = arr_8 [i_1] [i_1] [i_1];
        var_33 = ((arr_9 [i_1] [i_1] [i_1] [i_1]) ? 0 : -448311975);
    }
    for (int i_6 = 1; i_6 < 22;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 4; i_7 < 22;i_7 += 1)
        {
            arr_24 [i_7] = (((-32767 - 1) * var_1));
            arr_25 [i_6] [i_7] = (!var_12);
            arr_26 [18] [i_7] = var_15;
        }
        var_34 ^= -1;
    }
    #pragma endscop
}
