/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_3] [i_1] = (((max(((1 >> (((arr_0 [6] [i_4 + 1]) + 55)))), (arr_10 [i_4 - 2] [i_3] [i_1] [i_2] [i_1] [i_0]))) << (((max(-1952848959, 15589232743532613515)) - 18446744071756702656))));
                                var_13 ^= (arr_2 [i_4 - 2] [i_3] [11]);
                                arr_13 [i_0 + 1] = (((((((min((arr_4 [i_4]), (arr_2 [i_1] [i_1] [i_1])))) ? ((max((arr_1 [i_1] [i_3]), (arr_1 [i_0] [i_1])))) : (((-4028171913574150519 >= (arr_7 [i_0] [i_2] [i_4 - 1] [i_3]))))))) && ((((var_8 || 2857511330176938120) ? 1 : (max(-46, (arr_9 [i_1] [i_4] [i_3] [i_2] [i_1] [i_0] [i_0]))))))));
                            }
                        }
                    }
                    var_14 = ((((((arr_10 [i_0 + 1] [i_0 - 3] [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 + 1]) ? (arr_10 [i_0 - 3] [i_0 - 3] [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 + 1]) : (arr_10 [i_0 - 3] [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 1])))) ? (((min((arr_10 [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0 - 3] [i_0 - 3] [i_0 - 1]), (arr_10 [i_0 - 3] [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0 + 1]))))) : (((arr_10 [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? 1338995111 : var_11))));
                    arr_14 [1] = ((-((~((max((arr_1 [i_2] [i_0 - 3]), (arr_8 [i_0] [i_1] [i_0] [i_2] [i_2]))))))));
                    arr_15 [i_0 + 1] [i_1] [i_2] [i_2] = ((((min(14420394722870700995, -46))) ? (max((arr_3 [12] [12]), ((-3 ? 46 : 18446744073709551615)))) : (min((arr_0 [i_0] [i_0 - 3]), (((arr_2 [i_0 - 1] [i_1] [i_1]) ? 2857511330176938120 : 0))))));
                    var_15 = (1 == 4026349350838850640);
                }
            }
        }
    }
    #pragma endscop
}
