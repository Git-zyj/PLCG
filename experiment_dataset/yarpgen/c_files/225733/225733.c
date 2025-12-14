/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((-(~var_12))) | ((var_10 * (min(var_2, var_7))))));
    var_19 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = ((!((max(-1, (max((arr_10 [i_0] [i_0] [i_0] [11] [i_0]), (arr_4 [i_1]))))))));
                                var_21 = (min(var_21, ((((((arr_10 [i_4 - 1] [i_4 - 1] [i_3] [i_0 + 1] [i_0]) % (arr_1 [i_0]))) == (min(var_7, (arr_1 [i_0]))))))));
                            }
                        }
                    }
                    var_22 = ((-(((!(((3615278103 ? (arr_5 [i_1] [i_1] [i_1] [i_1]) : var_7))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_23 = ((((32 ? (((((arr_9 [i_0] [i_0] [i_2] [i_5]) || (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (arr_14 [i_0] [i_0] [i_1] [i_0] [i_5] [11]))) * (arr_9 [i_0 + 1] [i_1] [i_2] [i_5])));
                                var_24 += (arr_5 [i_6] [i_0] [i_0 - 1] [i_0]);
                                var_25 = (max(var_25, ((((max((arr_5 [i_6] [i_1] [i_6] [i_5]), -var_1)) * ((((arr_12 [i_0]) == (arr_13 [i_0] [i_6] [0])))))))));
                            }
                        }
                    }
                    var_26 += (arr_7 [i_0] [i_0] [i_0] [0] [0]);
                    var_27 |= 112;
                }
            }
        }
    }
    #pragma endscop
}
