/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_15 = 112;
                        var_16 = ((((-(arr_6 [0] [i_2 + 2] [i_2 + 2] [i_1 + 1]))) > (204 != 40795)));
                        var_17 = (max(var_17, (((4294967291 ? (max((((arr_5 [i_3] [i_1] [i_3]) / var_11)), ((69 ? 213 : (arr_8 [i_0] [i_1 - 1] [i_2]))))) : (arr_9 [i_3] [i_3] [3]))))));
                        var_18 = -31431;
                    }
                    arr_10 [i_1] [i_1] [i_0] [i_1] = ((!(arr_7 [i_1 + 1] [10])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((((((255 ? -26039 : 5))) ? (((((31431 << (18991 - 18986)))) ? ((var_4 & (arr_5 [i_2] [i_1] [i_2]))) : (-1111611904 + 40715))) : (min((arr_12 [i_0] [i_0] [i_2] [i_4] [i_5]), ((187 / (arr_1 [i_2]))))))))));
                                var_20 = (i_1 % 2 == zero) ? ((((((var_1 ? (((arr_9 [i_2] [i_2] [i_5]) << (((arr_5 [i_0] [i_2] [i_1]) - 189)))) : (arr_8 [i_2 - 1] [i_4] [i_2 - 1])))) ? 255 : -2117850070))) : ((((((var_1 ? (((arr_9 [i_2] [i_2] [i_5]) << (((((((arr_5 [i_0] [i_2] [i_1]) - 189)) + 63)) - 11)))) : (arr_8 [i_2 - 1] [i_4] [i_2 - 1])))) ? 255 : -2117850070)));
                                var_21 = 211;
                                arr_17 [i_0] [i_0] [i_2] [i_4] [i_2] [i_5] &= (((arr_6 [i_1 - 2] [i_0] [i_1 - 2] [i_0]) << (104638870 || 578)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, var_12));
    #pragma endscop
}
