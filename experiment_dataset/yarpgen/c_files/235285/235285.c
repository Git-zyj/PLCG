/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_11;
    var_13 = (((((var_1 & var_7) <= (-816870652 & 549362212)))) * var_11);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = ((-1440786252 - var_11) ? (((arr_1 [4]) ? (((arr_9 [i_0] [i_0] [i_2] [i_0]) ? (arr_9 [i_2] [i_2] [i_2] [i_0]) : var_9)) : ((-(arr_5 [i_1]))))) : ((var_5 + ((var_7 + (arr_5 [i_2]))))));
                    var_15 = (~(max(var_7, var_11)));
                    arr_10 [i_0] [i_1] [i_2] = ((!(((var_11 ? -83785032 : ((1391075235 ? var_0 : (arr_7 [14] [i_1] [i_2] [5]))))))));
                    var_16 = var_4;
                }
            }
        }
        var_17 = (((max((min((arr_2 [i_0] [i_0] [i_0]), var_7)), var_4))) ? (arr_4 [i_0]) : (((((var_5 & (arr_7 [i_0] [i_0] [i_0] [i_0]))) <= (368057684 & 1384819676)))));
        var_18 = (-1384819676 ? (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : var_1)) : -1461149664);

        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            var_19 = (-(!-1868797918));
            var_20 = var_0;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            var_21 = ((1761612022 != -1761612022) << (var_9 || var_1));
            var_22 = (((var_8 ? var_8 : var_3)) / var_10);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
        {
            var_23 = -1761612006;
            arr_19 [i_0] = (+((var_11 << (((((arr_0 [i_0]) + 1322625033)) - 28)))));
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
        {
            var_24 = ((arr_3 [i_6] [i_0] [i_6]) & var_8);
            var_25 &= -831043444;
            var_26 = ((!((var_1 && ((min(1506580306, var_6)))))));
            arr_24 [4] = min(var_1, var_5);
        }
    }
    #pragma endscop
}
