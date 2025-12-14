/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~((~(~var_18))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = ((!((!(!4293464026118258188)))));
                    var_21 = (!(((-(~-4293464026118258188)))));
                    var_22 ^= (((-(~17132103249193617917))));
                    var_23 *= (-((~(((!(arr_0 [i_2])))))));
                }
            }
        }
        var_24 &= ((~(!-var_12)));
        var_25 *= (~var_11);
        var_26 = ((-((~(!-126)))));
    }
    for (int i_3 = 3; i_3 < 12;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                {
                    var_27 += (((~(!var_2))));
                    var_28 += ((!((!(!179)))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_29 = (!var_5);
                                var_30 = (!-4293464026118258208);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_31 = (!-91180496);
                                var_32 = ((!(!-0)));
                            }
                        }
                    }
                }
            }
        }
        var_33 = ((~(~17132103249193617905)));
        var_34 &= (((~(~var_13))));
    }
    #pragma endscop
}
