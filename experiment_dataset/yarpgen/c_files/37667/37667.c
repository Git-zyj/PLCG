/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((var_8 ? (((((min(762736584, var_3))) ? (~var_14) : var_16))) : (max((var_12 ^ 762736569), (~4))))))));
    var_21 += (((~var_19) ? ((3532230710 ? ((var_14 ? var_10 : var_15)) : var_17)) : var_3));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_11 [i_0 + 1] [17] [i_1 - 1] [i_1] [1] [2] [17] = 435089592;
                                var_22 = (!(((var_10 ? (122 && -34) : var_13))));
                                var_23 = (min(var_2, (((((var_9 / (arr_10 [i_0] [i_0] [i_1 + 1] [1] [0] [i_4 - 1])))) ? (arr_9 [i_4] [i_4 + 1] [i_2 + 1] [9] [i_4]) : (arr_10 [i_1 + 1] [2] [i_2 + 1] [i_4 + 4] [i_2 + 1] [i_4])))));
                                var_24 = 1872484235182346897;
                            }
                        }
                    }
                    var_25 = ((3532230699 ? ((6848014235138909192 / ((762736575 >> (762736569 - 762736547))))) : 762736588));
                }
            }
        }
    }
    #pragma endscop
}
