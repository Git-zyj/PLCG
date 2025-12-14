/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (((((max(var_0, var_4))) ? var_1 : (min(689064558, 0)))));
    var_16 = (max(var_16, ((((max(var_11, 689064560))) + (689064551 || var_1)))));
    var_17 = (max(var_17, ((((-((6579698879734524012 ? 21862 : 233))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) ? (arr_0 [i_0]) : -689064559));
        var_18 ^= var_11;

        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_1] = (((arr_5 [i_0]) ? var_4 : 689064570));
            var_19 = (min(var_19, 25978));
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_20 = 1;
                            arr_15 [i_0] = var_0;
                            arr_16 [i_0] [i_0] [i_0] = var_1;
                            var_21 = (max(var_21, -var_9));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {
            var_22 += (arr_18 [i_0]);
            var_23 = var_1;
            arr_20 [12] [i_5] [i_5] = (arr_18 [0]);
            arr_21 [i_0] [i_5] [i_5] = (((689064576 ? -18 : 95063316)));
        }
    }
    var_24 = (max(2147483647, var_14));
    #pragma endscop
}
