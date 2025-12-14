/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_4 ? (((((-1882694460 ? 0 : var_12))))) : var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_14 |= ((arr_3 [i_1] [i_1 + 1]) << (((arr_5 [i_0] [4] [i_1 - 2]) + 33)));
                    var_15 ^= (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])));
                    arr_7 [i_2] [i_1] = (((arr_6 [i_1] [1] [12] [i_1 - 2]) << (90 - 90)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_2] [i_2] [i_3] [i_4] = var_5;
                                var_16 = (max(var_16, ((((arr_0 [i_1 + 2] [i_1 + 3]) << (var_10 - 6842203939173549668))))));
                                arr_13 [3] [i_2] [i_2] [i_2] [i_2] [i_1 + 2] [i_2] = (((var_9 + 2147483647) << 0));
                            }
                        }
                    }
                    var_17 = (max(var_17, -6615127373770257328));
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    arr_18 [i_0] [i_0] [i_5] = ((255 ? 8830564271595696993 : -28));
                    var_18 = (max(var_18, 845462716));
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    var_19 += ((-(arr_20 [i_0] [i_0])));

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_25 [i_0] [i_1 - 2] [i_6 + 1] [i_6 + 1] |= ((112 & (arr_5 [i_0] [10] [i_1 + 1])));
                        var_20 |= (-(~-1));
                    }
                }
                arr_26 [i_0] [0] [9] = (((~1545149334361577009) / -1741100527));
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        {

                            for (int i_10 = 0; i_10 < 13;i_10 += 1)
                            {
                                var_21 = (max(var_21, ((((((((arr_16 [4] [i_8] [4]) ? 35 : 184)) <= (var_10 > 3))) ? 1906120233 : (max(8178228597889772673, (arr_14 [i_8 + 1] [i_8 - 1] [i_8] [i_8 - 1]))))))));
                                var_22 = 19;
                                var_23 = (arr_9 [i_0] [i_1] [i_1] [i_10]);
                            }

                            for (int i_11 = 1; i_11 < 12;i_11 += 1)
                            {
                                var_24 += ((((((25 ? (arr_39 [i_1 - 1] [i_8 + 1] [0] [i_11 - 1] [5] [i_11]) : (arr_19 [11] [i_9 - 1] [i_8 - 1]))) + 9223372036854775807)) << (((((arr_0 [i_0] [i_9 + 2]) / (arr_34 [i_8 - 2] [i_1 + 3]))) - 17))));
                                arr_40 [i_0] [i_1 + 3] [i_8] [3] = ((61 ? (((123 <= ((~(arr_32 [i_0] [5] [i_1] [i_8 + 1] [i_9] [i_11 - 1])))))) : (((((82 ? 233 : var_1))) ? 1 : ((max(32761, -10055)))))));
                            }
                            for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
                            {
                                var_25 = (min(var_25, (((min(0, 13651440443757755656))))));
                                arr_44 [9] [i_1] [i_8] [i_8] [i_12] [i_8] [i_8] = ((-5580109489609768896 ? 0 : 55));
                            }
                            for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
                            {
                                arr_47 [0] [i_1] [i_1] [i_1] [i_1] = (((((arr_6 [i_1] [i_1] [i_1 + 3] [i_1]) >> 1)) >> (((((arr_6 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_9 - 1]) ? 4294967295 : (arr_16 [i_1] [i_1] [i_13]))) - 4294967285))));
                                var_26 = ((min(137486500, var_10)) <= (((((arr_21 [i_8 - 1] [i_1 + 2]) >= (arr_11 [i_8] [i_13] [i_9 - 1] [i_9] [i_8 - 1] [i_13] [i_1 + 2]))))));
                                var_27 = var_7;
                            }
                            arr_48 [i_1] [i_8 + 1] [i_1] [5] [i_0] [i_0] = (((arr_30 [i_0] [i_8 - 3] [4]) / var_5));
                        }
                    }
                }
                var_28 = (max(var_28, var_1));
            }
        }
    }
    #pragma endscop
}
