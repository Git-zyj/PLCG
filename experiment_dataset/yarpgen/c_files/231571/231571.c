/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((max(((0 ? var_14 : var_17)), (((-52 > (-127 - 1)))))), var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [10] [10] &= (((~1) / 16381));
                var_21 ^= ((!((var_17 && (~61)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3 - 1] [i_3 - 2] [i_0] = (~var_5);
                            arr_12 [i_0] [i_3] [i_3] [i_3] [i_3] [i_3 + 2] = 14051558708602713595;
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        var_22 = (((((-(~65532)))) ? (18446744073709551597 / 9) : -1137854516));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 8;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 7;i_7 += 1)
                {
                    {
                        var_23 = (min(var_23, ((min((~1), -13)))));
                        var_24 = ((1 ? ((62 - (min(var_14, var_15)))) : ((max((38 - 0), (1137854539 - 1))))));
                        var_25 = (max(var_3, (min(98, 25))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 8;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {
                    var_26 = (max(var_26, ((((((((min(11, 102))) ? (max(1, var_14)) : ((9748660451389800494 ? 1 : var_17))))) ? (max((var_11 && -1209409072), ((var_2 ? var_9 : 502145317)))) : (((-1943589591 < (min(var_2, 1))))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 7;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_27 = (max(var_27, -995245202572322300));
                                arr_36 [i_8] [i_8] [i_9] [i_10 + 2] [i_4] [i_11] [i_4] = ((!(((max(1, var_5))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
