/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_2] = 15;

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        var_19 += var_5;
                        arr_12 [i_1] [i_2] = 4273951213;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_16 [i_2] [i_2] = (4273951230 || 15935);
                        arr_17 [i_2] = var_5;
                        arr_18 [6] [6] [6] [i_4] [i_4] &= -18547;
                        var_20 = ((21016063 ? 6263273365931083467 : -24193));
                    }
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        arr_23 [i_2] = var_4;
                        var_21 = 0;
                        var_22 = (((((24195 ? 8250886552561646836 : 18195))) ? 4 : (max(262143, 24204))));
                        arr_24 [i_0] [i_0] [i_0 + 1] [i_2] [i_0 - 2] [i_0] = (((((~(!-8601)))) ? -24179 : ((21016088 ? 21016088 : 9726854472334325597))));
                        var_23 -= (15419152928638479182 <= 1);
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_24 += (((((8615 ? 68719476735 : 4096))) ? (max(1, -1)) : (((arr_28 [i_0] [i_0] [i_0] [i_0 + 1] [i_1]) + (arr_9 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [5])))));

                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_25 = 3863747142;
                            var_26 += -8586;
                        }
                        var_27 = -8192;
                    }
                }
            }
        }
    }
    var_28 -= -8619;
    var_29 = (min(17782245728362402063, -8601));
    var_30 = (min(var_30, ((max(87, -15390)))));
    var_31 = ((-((4273951236 ? 1 : 16946538171355165527))));
    #pragma endscop
}
