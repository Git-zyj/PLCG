/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 100847688671102422;
    var_12 = min(((((((var_4 ? 2097151 : 4170920557))) ? ((var_3 ? var_2 : var_10)) : (~var_1)))), (max((min(var_9, var_8)), (min(2147483637, 124046739)))));

    for (int i_0 = 3; i_0 < 23;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_13 = arr_1 [i_0];
                        arr_10 [16] [i_1] [i_2] [8] &= var_9;
                        var_14 = (arr_9 [i_0] [1] [1] [i_0] [0]);
                        arr_11 [i_0] [i_0] = 96;
                        var_15 = min((((!var_6) ? (arr_3 [i_0]) : ((var_0 ? var_1 : (arr_6 [i_3]))))), (((var_6 ? ((((arr_9 [i_0] [i_0] [i_1] [i_0] [i_0]) || -2097152))) : (arr_8 [13] [23] [13] [13] [i_3])))));
                    }
                }
            }
        }
        arr_12 [14] &= (((min((min((arr_1 [8]), (arr_3 [10]))), (arr_1 [12]))) / (max((max(4170920557, var_1)), (~124046738)))));
    }
    for (int i_4 = 3; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_16 = (((((min(915443467, -2097163)))) >= ((((((arr_9 [i_4 - 3] [i_4] [i_4] [i_4] [i_4]) ? var_4 : 8214469706801609313))) ? 0 : (((118 ? (arr_5 [i_4] [i_4]) : 2147483647)))))));
        var_17 = (((((((0 ? var_6 : (arr_0 [i_4 - 2]))) >= (arr_7 [i_4] [i_4] [i_4])))) == (((((var_10 ? 108 : 32752)) < var_6)))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        arr_25 [i_4] = (min(12354878749779058174, ((((((109485683 >> (((arr_14 [i_6]) - 303386043))))) ^ (min(8785036020278194325, 915443467)))))));

                        for (int i_8 = 2; i_8 < 21;i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_4] [i_4] [i_4] = (!((((arr_1 [i_4]) - (arr_1 [i_4])))));
                            var_18 = (max(var_18, var_7));
                        }
                        /* vectorizable */
                        for (int i_9 = 2; i_9 < 21;i_9 += 1) /* same iter space */
                        {
                            var_19 = (arr_20 [i_4 - 3]);
                            var_20 *= ((226 ? (((((arr_2 [i_7] [2]) == var_3)))) : ((243 ? 1 : var_8))));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_21 = (min(var_21, (((min(((min((arr_4 [i_10] [i_10]), (arr_2 [i_7] [i_7])))), ((-(arr_30 [i_10] [i_7] [i_10] [i_7] [22] [i_7] [i_4])))))))));
                            arr_35 [i_4] [i_4] [i_6] [1] [i_10] = (max(((24 ? (arr_13 [i_4] [i_6]) : 153)), ((+((((arr_13 [i_4] [i_4]) || 0)))))));
                            var_22 &= (((((((min(1045188536, 74)) != 2048)))) == -8322504981683485318));
                            var_23 = ((((min(((min((arr_23 [1] [1] [1] [i_5]), var_6))), (arr_14 [i_4 - 2])))) ? ((((arr_32 [i_4] [4] [i_4 - 2] [i_4 + 1] [i_4 - 1] [i_6 - 2]) && 1))) : (arr_32 [i_10] [10] [10] [i_7] [i_4] [i_10])));
                        }
                        var_24 = (((((arr_17 [i_4 - 3]) >> (((arr_7 [i_5] [i_6 + 2] [i_7]) - 48)))) != ((max(217200414, 0)))));
                        var_25 += (+(((arr_24 [i_6 - 1] [i_6 - 1] [i_6 - 2] [i_6 - 3]) ? (arr_30 [i_6 - 1] [i_5] [i_6] [i_7] [i_4] [i_7] [i_4]) : (arr_30 [i_6 + 1] [i_5] [i_6 - 1] [i_7] [i_6 - 1] [i_7] [i_6]))));
                        var_26 = (~(((arr_31 [i_4] [i_4] [i_4] [i_4 - 2]) ? 18446744073709551600 : (-9223372036854775807 - 1))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
