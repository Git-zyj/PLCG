/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~1656946051) ? (!0) : ((-(min(1363065269370812409, -2002770587560485274))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_13 = 2002770587560485273;
                                var_14 ^= ((!((min(2102040655, (!-2102040655))))));
                                var_15 = (((-2002770587560485274 < 1) ? (250 != 1) : ((min(3270904311, 2002770587560485273)))));
                                var_16 = (min(-6, (min(var_2, (-4096 & var_4)))));
                                arr_14 [i_0] [9] [1] [i_0] [4] [i_0] [1] = ((var_6 ? ((min(60, 56))) : (min(-2112295459, 1))));
                            }
                        }
                    }
                    var_17 = ((((min(200, (96 - 0)))) >= (((min(-2002770587560485274, 2794778973)) | var_11))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 6;i_6 += 1)
                        {
                            {
                                var_18 = (((((min(var_10, var_1))) <= ((32505856 ? 715164999 : 217)))) ? (min(var_4, var_7)) : 6720278963134394532);
                                var_19 |= var_5;
                                arr_20 [i_0] [i_1] [i_2 + 1] [i_5] [i_6] = (min(254, (min(59504, 32505856))));
                                arr_21 [i_0] [i_0] [i_1] [i_2] [8] [2] [i_6 - 3] = (min(((-65535 ? 78 : 1)), (!-2002770587560485274)));
                                var_20 = (min(((((179 != 1356332276) | (min(var_8, 67107840))))), 1066347244));
                            }
                        }
                    }
                    arr_22 [i_0] [2] [i_2] [1] = 9989;
                }
            }
        }
    }
    #pragma endscop
}
