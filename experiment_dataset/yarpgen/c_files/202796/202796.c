/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-8056 + 2147483647) << (var_13 - 1));
    var_21 = (121 - var_0);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    var_22 = (max(var_22, (8068 || 121)));
                    var_23 = 26366;
                    var_24 = (-((var_3 ? (arr_6 [i_0]) : 134)));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_25 = ((1 ? ((((arr_6 [i_1 + 2]) ? -27824 : 15))) : ((((var_4 ? 1152851135862669312 : -104)) % (((80 ? 1536 : (arr_5 [i_0] [i_1 + 3] [i_3]))))))));

                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 11;i_4 += 1)
                    {
                        var_26 = (max(var_26, 8422254934652603663));
                        arr_12 [i_0] [i_1] [i_1] [i_3] [i_4] = var_3;

                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_3] [i_4] [i_5] = 124;
                            var_27 = (74 == (((!(arr_10 [i_5 - 1] [i_3] [i_0 - 1])))));
                            arr_18 [i_0] [i_1] [i_3] [i_4] [i_5] = ((((8050 + (arr_10 [i_3] [i_4 - 1] [i_5]))) << (arr_2 [i_0] [i_0 + 1])));
                            var_28 = (((arr_13 [i_5] [i_3] [i_3] [i_1 - 1] [i_1 - 1]) % (arr_13 [i_5] [i_4 - 2] [i_4] [i_1 + 1] [i_1])));
                            var_29 -= ((((!(arr_14 [i_5 - 1] [i_3] [i_3] [i_3] [i_0 - 1])))));
                        }
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            arr_21 [i_6 - 1] [i_0] [i_4] [i_3] [i_0] [i_0] = ((1 << (((arr_10 [i_1] [i_3] [i_6 + 2]) - 875854273))));
                            arr_22 [1] [i_0] [i_3] [i_0] [i_0] = (((~121) ? 56861 : (((arr_4 [i_0]) ? (arr_16 [i_0] [i_1] [i_3] [i_6]) : -8907520146306271315))));
                        }
                    }
                    arr_23 [i_0] [i_1] [i_0] = 31;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_30 = ((((-8046 ^ (~0))) >> (((((((var_13 ? 37133 : -93))) ? ((~(arr_4 [i_7]))) : (arr_7 [i_7] [i_7] [i_7]))) - 10827969962438575515))));
                                var_31 = (arr_13 [i_8 - 2] [i_8] [i_8] [i_8 - 1] [i_8 - 1]);
                            }
                        }
                    }
                }
                var_32 -= (((((-29 ? 24969 : -8055))) ? var_6 : (((((arr_6 [i_0]) ? (arr_3 [i_1 - 1]) : (arr_7 [i_1 + 1] [3] [i_0])))))));
                var_33 = (max((arr_0 [i_0 + 2]), ((((min(-27196, 9223372036854775807))) ? -8907520146306271341 : (arr_20 [i_0 + 1] [i_1 + 3] [i_1 + 2])))));
            }
        }
    }
    var_34 = 1;
    #pragma endscop
}
