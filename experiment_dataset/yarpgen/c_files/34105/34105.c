/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 = (((((15476 ? 28168 : 28180))) ? (max(((min(-28169, var_11))), -28168)) : ((((1783981191871226178 >= var_2) && ((min(var_11, var_1))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 *= (max(28179, var_5));
                                var_19 = (min((min((min((arr_9 [i_4] [i_2]), var_7)), var_11)), -28169));
                                var_20 = (((~var_2) ? ((~(arr_0 [i_1 - 3]))) : (min((arr_7 [i_0] [i_2] [i_2] [i_3 - 4]), (arr_0 [i_1 - 1])))));
                                var_21 = (max(var_21, ((((((var_10 ? (arr_0 [i_1 + 2]) : var_11))) ? (((((59216 % 251) == (~var_11))))) : (max((((arr_14 [i_2] [i_1] [i_0]) | var_0)), ((max(173293809, -28168))))))))));
                            }
                        }
                    }
                    var_22 = ((((((((arr_13 [0]) >= var_13)) ? (((min(var_6, var_4)))) : ((var_11 ? 128923918 : var_11))))) / ((-28168 ? var_1 : ((var_11 ? -864156179808577024 : var_13))))));
                }
            }
        }
    }
    #pragma endscop
}
