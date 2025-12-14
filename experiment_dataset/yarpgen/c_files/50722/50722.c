/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min(10755, 8865919446054586330))) ? (!var_9) : 108);
    var_12 = ((min(var_0, var_2)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = (((arr_2 [i_2 - 1] [i_2 + 2]) ? (arr_2 [i_2] [i_1]) : (((min(-67, -2061344523))))));
                    arr_10 [i_1] [i_1] [i_2 + 1] = (var_5 / 65535);
                    var_13 = 67108736;

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        var_14 = (min(var_14, ((((arr_4 [i_0] [i_1]) & 12545627081020299947)))));
                        var_15 += 18446744073642442880;
                    }
                    arr_15 [i_0] [i_1] [i_2] = (min((7203726467274144278 & 12545627081020299947), ((-31300 ? (~0) : 12))));
                }
            }
        }
    }
    #pragma endscop
}
