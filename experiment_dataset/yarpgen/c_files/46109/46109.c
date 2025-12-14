/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((((799732451832737907 * (12550709739263404909 / var_7)))) ? ((((65530 ? var_7 : var_5)))) : (max(5896034334446146712, ((max(-298750151946031683, (-9223372036854775807 - 1))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((min((4129 || 0), ((1 / (max(var_13, 18109477109585373672)))))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, var_13));
                                var_17 ^= (((((((arr_6 [i_0 + 1] [i_0 - 1] [i_0 + 1]) <= 1)))) * (max(-441622446, (arr_13 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0])))));
                                var_18 = (min(var_18, (((var_5 + (((min(var_3, var_7)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_0;
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 8;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                {
                    var_20 = (max(var_20, ((min(5, (((var_12 << (((arr_13 [11] [i_6] [i_6] [i_6 + 1] [i_6]) - 1081780455))))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_27 [i_5] = ((((max(((4241876800 ? (arr_15 [i_9] [i_7]) : var_3)), var_2))) ? ((min(-1464667229, -1))) : -4740736128525474951));
                                var_21 = 1;
                                arr_28 [i_8] &= var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = 149;
    #pragma endscop
}
