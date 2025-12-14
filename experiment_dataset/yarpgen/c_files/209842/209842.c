/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0 + 3] [i_0 + 3] [2] = (((min((max(7906622530627746245, -2147483636)), -2114349376)) << (((min((~16156), (arr_3 [i_0] [i_1]))) + 16169))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                arr_14 [i_3] [i_1 - 1] [i_3] [i_4] [i_4] [i_4] [i_3] = 9223372036854775784;
                                var_11 = (max(var_11, var_9));
                                var_12 *= -16156;
                                var_13 = ((((((arr_1 [i_1 - 3]) ? -16157 : (arr_2 [i_0 - 2] [i_2])))) ? 10540121543081805371 : -5068775684681659113));
                            }
                            for (int i_5 = 0; i_5 < 12;i_5 += 1)
                            {
                                arr_17 [i_0] [i_1] [i_2] [0] [i_5] = (((arr_0 [1]) ? ((((arr_10 [i_0 - 1] [i_1] [i_2] [i_5] [i_1 - 3] [i_1]) ^ (arr_10 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 + 3] [i_0])))) : (((arr_2 [i_3] [6]) ? (arr_0 [i_0]) : (arr_3 [i_0 + 1] [i_1 - 3])))));
                                var_14 = (((arr_11 [i_0 + 3] [i_0 + 3] [i_1 - 2] [i_1 - 3] [i_1]) / (max((((0 ? (-9223372036854775807 - 1) : 1950718226124453099))), 10540121543081805354))));
                                var_15 = arr_5 [2];
                            }
                            arr_18 [i_1 + 1] [i_1 + 1] [i_1 + 1] = (arr_16 [i_0] [i_1] [i_2] [i_2] [i_0] [i_3]);
                            var_16 = (min(var_16, 5068775684681659097));
                            var_17 = (min(var_17, var_2));
                        }
                    }
                }
            }
        }
    }
    var_18 = var_8;
    #pragma endscop
}
