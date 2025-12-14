/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_9 ? 3100055156330087370 : (((-16840666780759371193 ? -1 : var_1)))));
    var_19 = -var_10;
    var_20 += var_15;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_21 = ((-((((arr_0 [i_0 - 1]) != 200)))));
        var_22 = (min(var_22, (535822336 * 0)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_23 = var_11;
                    var_24 = ((-1981830869 ? 2379561885817273233 : 255));

                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        var_25 = var_9;
                        var_26 = var_13;

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_18 [i_5] [i_5] [i_5] [i_5] [i_5] [i_3] [i_5] = ((-58 >= (arr_12 [i_3] [i_4 + 2])));
                            var_27 = (((arr_17 [i_4] [i_4 + 2] [i_4 + 2] [i_3]) || (arr_17 [i_3] [i_4 - 1] [i_4 + 2] [i_3])));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_23 [i_3] [i_2] = (!-5047);
                            arr_24 [i_3] [i_3] [i_3] = (((arr_10 [i_3] [i_6]) & 12987115285421050639));
                            var_28 = (!15346688917379464237);
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_29 = -11408170739230302217;
                            arr_28 [i_1] [i_3] [i_1] [i_3] [i_4 + 1] [i_4 + 1] = -1116769278992859951;
                            var_30 = 16840666780759371193;
                        }
                        var_31 = (min(var_31, ((((arr_4 [i_4 + 1]) ? (arr_4 [i_4 - 1]) : (arr_4 [i_4 + 2]))))));
                    }
                }
            }
        }
        arr_29 [i_1] = (235 ? (-6627703134767190880 | 9) : (arr_10 [i_1] [18]));
        var_32 = (arr_12 [i_1] [8]);
    }
    var_33 = var_14;
    #pragma endscop
}
