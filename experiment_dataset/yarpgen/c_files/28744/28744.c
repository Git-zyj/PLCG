/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            var_19 = var_0;
                            arr_11 [i_1] = (arr_3 [i_0]);
                            var_20 = ((-79 ? 123 : 1));
                        }
                        var_21 -= (arr_7 [i_2] [i_2] [i_2] [i_2] [i_2]);
                        var_22 -= 18045776228136858582;
                    }
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        arr_14 [i_1] = (min(-412256512, (!24001)));
                        arr_15 [i_1] [i_1] = var_4;
                        var_23 = var_9;
                        arr_16 [i_0] [i_0] [i_1] [i_0] [i_2 + 1] [i_0] = var_12;
                        arr_17 [i_1] [i_2] [i_0] [i_1] = 18045776228136858582;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_24 = ((arr_3 [i_0]) ? 7984612325657602151 : 1073741568);
                        var_25 = var_1;
                        var_26 = (((arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]) ? var_1 : (((arr_1 [i_2 + 2]) ? -1077142780 : var_17))));
                    }
                    var_27 = (arr_8 [i_2]);
                }
            }
        }
    }
    var_28 = ((((25201 == ((var_9 ? 46214 : var_18)))) ? (~var_8) : ((var_13 ? (~var_5) : var_16))));
    #pragma endscop
}
