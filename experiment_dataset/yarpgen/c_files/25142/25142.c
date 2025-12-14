/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(min(2147483647, (-32755 | var_9)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            var_14 = (((4294967295 / var_0) ? (var_5 / var_1) : ((var_4 ? -32755 : 1550561898528668341))));
            var_15 = (((!32217) ? 0 : 13751617112983303892));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_16 = (min(1, 944827751));

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            arr_11 [i_0] [i_0] = 7;
                            var_17 = (1 / 1);
                            arr_12 [i_1] [i_1] [i_0] = (var_2 | -338392879);
                            var_18 = (-1 | 219);
                        }
                        arr_13 [i_0] = (!(((-944827727 ? var_3 : -340885132))));
                        var_19 = (min(var_19, ((max(var_7, 1842562618)))));
                    }
                }
            }
        }
        var_20 = 0;
    }
    var_21 = (((-var_9 | var_4) / -36));
    #pragma endscop
}
