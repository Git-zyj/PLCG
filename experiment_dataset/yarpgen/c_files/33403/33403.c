/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {

                            for (int i_4 = 4; i_4 < 9;i_4 += 1)
                            {
                                var_10 = (max(var_10, var_9));
                                var_11 = (max((min(7028, 111)), (arr_8 [i_0] [i_2] [i_1] [i_0])));
                            }
                            for (int i_5 = 0; i_5 < 12;i_5 += 1)
                            {
                                var_12 = (arr_13 [i_0] [i_0] [i_1] [i_2] [i_0] [i_5]);
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_5] [i_5] [i_3] = (min(((min(var_9, 6))), (min((((4 ? 20254 : 45278))), ((70 ? 4294967290 : -114))))));
                                var_13 = ((~(((((var_0 * (arr_10 [i_5] [i_3] [i_2] [i_1] [i_0])))) ? 4294967283 : 32758))));
                            }
                            for (int i_6 = 3; i_6 < 11;i_6 += 1)
                            {
                                var_14 = ((((min(var_0, var_2)))));
                                var_15 = (max((arr_12 [i_2] [i_1] [i_2] [6] [i_0] [i_0] [i_0]), 111));
                            }
                            var_16 = (min(var_16, ((min(((-(((arr_13 [i_1] [0] [0] [i_3] [i_3] [i_3]) / 18446744073709551594)))), ((min((arr_5 [i_1] [i_1] [4]), var_1))))))));
                            var_17 = var_8;
                        }
                    }
                }
                var_18 = (max(var_18, (!16)));
                arr_18 [i_0] = (((~var_4) ? (arr_3 [i_1] [i_1] [i_1]) : var_0));
            }
        }
    }
    var_19 = 215;
    #pragma endscop
}
