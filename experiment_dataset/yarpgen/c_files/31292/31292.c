/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((max((max(var_0, var_2)), ((max(var_12, 112))))), var_10));
    var_19 = ((((((var_17 != var_9) ? (min(var_3, 0)) : var_4))) ? 182 : var_10));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 *= (((((((arr_1 [i_0] [i_0]) ? var_5 : 16272593201161421317)))) ? ((max((((arr_0 [i_0] [i_0]) ? var_5 : var_9)), var_5))) : ((min(182, (arr_0 [i_0] [i_0]))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_21 *= var_12;
            arr_5 [i_0] [i_0] = (33554416 % 2174150872548130298);

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                arr_8 [i_0] [i_2] |= (16272593201161421317 - var_14);
                var_22 = (((((var_13 ? var_16 : var_1))) ? -7943 : var_9));
                var_23 = (((71 * 1) ? (((((arr_6 [i_0]) && var_8)))) : (var_0 + var_11)));
            }
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_12 [i_0] [i_0] = var_5;
            var_24 = (((var_15 == 189) ? (((min((((arr_1 [i_3] [i_0]) <= (arr_0 [i_3] [i_0]))), var_16)))) : (((arr_0 [i_0] [i_3]) ? (var_7 % 2147483616) : (arr_7 [i_0] [i_0] [i_0] [3])))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_25 = min(-25522, ((var_6 ? (arr_19 [i_0] [i_3] [i_0] [i_5] [i_6] [i_0]) : 18446744073709551615)));
                            var_26 = (min((max(-2147483616, 9223372036854775801)), (((1 + (arr_2 [i_0] [i_0]))))));
                            var_27 = var_11;
                            var_28 = (min(var_16, 2174150872548130298));
                            var_29 ^= (arr_6 [i_4]);
                        }
                    }
                }
            }
            arr_20 [i_0] [i_0] = (((((16272593201161421317 ? -1993310123 : 2174150872548130299))) ? 536870896 : (((((min(16272593201161421318, 1))) ? 28511 : ((max(var_10, 119))))))));
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_30 = (max((arr_9 [i_0] [i_0] [i_7]), var_8));
            var_31 = ((((536870894 ? ((min((arr_11 [i_7] [i_0]), (arr_2 [i_0] [i_0])))) : (max(5425773216304496738, -88)))) | (arr_18 [i_7] [i_7] [i_0] [i_0] [i_0] [i_0])));
        }
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        var_32 ^= (((((max(var_10, 0)) ? 6 : 0))));

        for (int i_9 = 4; i_9 < 21;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    {
                        var_33 = var_6;
                        arr_36 [i_8] [i_9] [i_9] [i_9] [i_10] [i_11] = ((+((var_14 ? (arr_25 [i_10 - 2] [i_9 - 2]) : (arr_31 [i_9] [i_11])))));
                    }
                }
            }
            var_34 = var_3;
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_35 = (arr_24 [i_8]);
            var_36 = (max(var_36, (((92 ? ((((arr_31 [i_8] [i_12]) > var_3))) : ((var_3 & ((((arr_34 [i_12] [5] [21]) >= var_1))))))))));
        }
        for (int i_13 = 1; i_13 < 20;i_13 += 1)
        {
            arr_43 [i_8] [i_13 + 1] |= var_9;
            arr_44 [1] [1] = (max((((arr_31 [i_13] [i_13]) == (((var_2 != (arr_37 [i_8] [18])))))), var_11));
            arr_45 [i_8] = 87;
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            var_37 = (max(var_37, (arr_24 [6])));
            arr_50 [i_8] [i_14] [i_14] = ((var_15 ? var_15 : (((var_12 >= (arr_38 [i_8]))))));
            arr_51 [10] [i_14] [i_14] = ((0 - ((128 ? 1 : 1))));
        }
        arr_52 [i_8] = arr_49 [i_8] [i_8] [i_8];
        var_38 -= ((26772770 ? -26772771 : 1410924371674735271));
    }
    #pragma endscop
}
