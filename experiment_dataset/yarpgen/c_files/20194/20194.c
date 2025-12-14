/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -125;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = (min((arr_2 [i_0 + 1]), ((120 + ((var_6 ? (arr_2 [i_0]) : var_15))))));
                var_22 = ((~(~var_16)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                var_23 &= (7289 & 121);
                                arr_18 [i_2] [i_3] [i_4] [14] [i_5] = (((7806 - 18315) >= -var_7));
                            }
                            for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                            {
                                var_24 = var_19;
                                var_25 *= (((((!(arr_15 [i_3] [i_4])))) == (((arr_12 [1] [15] [15] [i_4] [i_7]) % ((max(108, 123)))))));
                            }
                            /* vectorizable */
                            for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
                            {
                                var_26 &= (var_0 <= 1);
                                arr_26 [i_2] [i_2] [i_4] [i_2] [i_2] [i_4] |= 3;
                                var_27 &= 4;
                                var_28 &= (!7288);
                            }
                            arr_27 [i_5] [i_5] = var_4;
                        }
                    }
                }
                arr_28 [i_2] [i_2] [i_2] = (-79 < -64);
                arr_29 [i_2] [i_3] = ((-((((max(17140431509024080134, 21)) > (((arr_22 [i_2] [i_3] [i_3] [i_3] [i_2] [i_3] [i_2]) ? 5229236952406397511 : -1)))))));
            }
        }
    }
    var_29 = var_7;
    var_30 = var_13;
    #pragma endscop
}
