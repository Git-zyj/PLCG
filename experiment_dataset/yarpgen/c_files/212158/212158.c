/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = (min(var_12, 4146));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_13 ^= ((((min((arr_0 [i_1]), (arr_0 [i_2])))) ? 61389 : -5927));
                    var_14 = (arr_1 [i_0 + 2] [i_0 - 1]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    arr_12 [i_0] [i_3] = ((!(arr_0 [i_0])));
                    var_15 = (((arr_3 [i_0 - 2]) + (arr_3 [i_0 + 3])));
                }
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    var_16 ^= (min(2147483647, (((!((max((-32767 - 1), (arr_5 [6] [6])))))))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            arr_20 [i_0] [i_1] = (8729 == 8729);
                            arr_21 [i_1] [12] [i_1] [6] [i_0] = (((37789 * var_8) ? (73 == 50773) : (2147483647 & 32767)));
                        }
                        for (int i_7 = 2; i_7 < 12;i_7 += 1)
                        {
                            var_17 = (min(var_17, ((((arr_18 [i_5]) ? var_1 : (-32767 - 1))))));
                            arr_26 [i_0] [i_0] = (((((arr_16 [i_0] [i_1] [i_0] [i_5] [2] [i_1]) > (-32767 - 1))) ? ((var_1 ? -7335 : (arr_5 [i_5] [i_7]))) : (arr_8 [i_0] [i_4] [i_4] [i_4 + 1])));
                            var_18 = (+((73 ? (arr_2 [i_0]) : (arr_7 [i_0]))));
                            arr_27 [i_0 + 2] [i_0] [i_1] [i_4] [i_1] [i_5] [i_7] = (((!32794) ? ((-27300 ? 10329 : 52393)) : -223));
                        }
                        for (int i_8 = 2; i_8 < 11;i_8 += 1)
                        {
                            var_19 = (~var_9);
                            var_20 += -18202;
                            arr_30 [i_0 - 1] [i_5] [i_4] [i_5] [i_8] |= (((var_1 == -14497) == 57344));
                            var_21 = (97 < var_5);
                        }
                        arr_31 [9] [i_0] = (-28961 | 27746);
                        var_22 = (15956 * 97);
                    }
                }
                var_23 = 31472459;
            }
        }
    }
    var_24 = var_0;
    var_25 = ((max(var_7, ((var_8 ? 54 : var_9)))));
    var_26 = (((var_0 % 1) >= var_2));
    #pragma endscop
}
