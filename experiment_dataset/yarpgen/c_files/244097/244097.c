/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, 1));
    var_19 ^= ((221 ? 20 : 48));
    var_20 = (((((((var_16 | 16867) ? var_1 : (var_15 & 74))) + 9223372036854775807)) >> (var_8 + 10399)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_8 [7] [7] [7] [i_0] [7] = (((arr_1 [1]) ? -15872 : var_3));
                            var_21 = (((min((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_0 [1] [4]))) & (min((arr_0 [i_1] [i_1]), ((min(255, -537)))))));
                            arr_9 [i_0] [i_1] [i_1] [i_1] = ((0 ? -2464407011 : 39));
                            arr_10 [i_0] [i_1] [i_1] [i_3] = 3957829507246351756;
                        }
                    }
                }
                var_22 = ((((((((var_6 ? (arr_2 [7]) : 34))) ? ((min(1, -9))) : (1 & 0)))) ? (((arr_0 [i_0] [i_1]) << ((((3957829507246351745 << (((arr_0 [1] [i_1]) - 10844528518572190260)))) - 17626891785886236625)))) : (arr_4 [i_0] [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_16 [i_0] [i_4] = 4503599627370495;

                            /* vectorizable */
                            for (int i_6 = 4; i_6 < 10;i_6 += 1)
                            {
                                arr_20 [i_0] [i_1] [i_4] [i_6] [i_6 - 2] = (((arr_18 [i_0] [i_0] [i_0] [i_5] [i_6] [6]) & (((!(arr_5 [i_6] [i_6] [i_6] [i_6]))))));
                                var_23 = (((arr_7 [i_0] [i_1]) % ((14488914566463199871 - (arr_4 [i_0] [i_0] [i_0])))));
                            }
                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                var_24 = (1 ? ((((min((arr_0 [i_7] [i_7]), (arr_1 [i_0])))))) : (((!14488914566463199879) ? (((arr_0 [i_0] [i_0]) % (arr_7 [i_0] [i_1]))) : ((min(6134257660265591320, (arr_5 [i_5] [i_4] [i_1] [i_0])))))));
                                var_25 = arr_1 [i_0];
                                var_26 = (arr_4 [i_5] [i_1] [i_0]);
                            }
                            arr_23 [i_5] [i_4] [i_1] [i_1] [i_0] [i_0] = (min(((((-(arr_22 [i_0] [i_1] [i_4]))) / var_8)), var_12));
                            var_27 = (arr_19 [i_0] [i_1] [i_4] [i_0] [i_4] [8] [i_0]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
