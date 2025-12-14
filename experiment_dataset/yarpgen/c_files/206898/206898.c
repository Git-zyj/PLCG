/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 *= ((((var_0 ? 0 : ((var_6 ? 3828055263 : var_12)))) < ((((!(((5450420036510037924 ? var_1 : 0)))))))));
                    var_14 &= (((((!(-127 - 1)))) ? (((((65535 ? 16128 : var_5))) ? (max(26, var_3)) : ((min(6877132423737838466, 0))))) : ((((!(!2305843009213693952)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 = ((!((max(0, (1125625028935680 ^ var_0))))));
                                arr_13 [i_0] [i_1] [i_0] [i_1] [i_4] = (9223372036854775807 ? ((((!(((var_10 ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 3]) : 5))))))) : ((((1 ? var_0 : var_1)) / 5)));
                                var_16 = (min(var_16, (!527280213)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_20 [i_5] [i_1] = (((!0) ? (!-3243535936488387438) : 2005456631689342879));
                                arr_21 [i_0] [i_1] [i_2] [i_1] [i_6] = ((var_5 == ((((!var_7) / ((var_12 ? -12341 : 1)))))));
                                var_17 *= (((!var_3) ? var_0 : ((min(1, 2947896009)))));
                            }
                        }
                    }
                    var_18 = ((!(((((max((arr_16 [i_1] [i_2] [i_1 + 1] [i_1]), var_1))) ? 255 : (arr_18 [i_0] [i_1] [i_0 + 1] [i_1] [i_2] [i_2]))))));
                }
            }
        }
    }
    var_19 = var_8;
    var_20 = (max(var_20, 2199023255551));
    var_21 = ((!(!3476334219977153181)));
    var_22 = ((var_8 ? var_2 : (!0)));
    #pragma endscop
}
