/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min(((var_9 ? var_4 : var_11)), ((min(var_16, (!var_11)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_19 ^= ((arr_3 [i_1] [i_0]) ? (arr_3 [i_0] [i_0]) : (((arr_3 [i_1] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0]))));
            var_20 = (min(var_20, (((120 ? ((max(-16340, 242))) : (!-1454))))));
            var_21 |= (max((((~var_9) | (arr_3 [i_0] [i_1]))), ((max(((min(1453, (arr_2 [12] [i_1] [12])))), var_7)))));
            arr_5 [i_0] = ((((((arr_3 [i_0] [i_0]) ? ((57279 ? (arr_0 [i_0]) : (arr_4 [i_0] [i_0]))) : 437474311))) ? ((max((max(var_17, var_17)), (arr_2 [i_0] [i_0] [i_1])))) : (max(((var_17 ? 437474313 : 65535)), 1453))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_22 = (((arr_9 [i_2] [i_2] [i_0]) ? 48927993 : (arr_9 [i_2] [i_2] [i_2])));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_23 = (min(var_23, (arr_6 [i_5] [i_3] [i_0])));
                            var_24 *= ((-1479 ? -1468 : (arr_14 [i_0] [i_2] [i_3] [i_4] [i_5] [i_5])));
                        }
                    }
                }
            }
            arr_16 [i_0] [i_2] [i_0] = (~var_11);
            var_25 &= -1514780766630932013;
        }
        arr_17 [i_0] = 10924;
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 17;i_6 += 1)
    {
        var_26 = ((!(arr_10 [i_6] [i_6 + 1] [i_6 + 2])));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 18;i_8 += 1)
            {
                {
                    arr_26 [i_8] [i_7] [i_8] = -6486870788954941252;
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            {
                                arr_32 [i_6] [i_8] [i_8] [i_8] [i_8] = -8257;
                                var_27 = -16281;
                                var_28 = (((arr_23 [i_8 + 1] [i_9] [i_10]) && var_9));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = (-32767 - 1);
    var_30 = (min(var_16, var_9));
    #pragma endscop
}
