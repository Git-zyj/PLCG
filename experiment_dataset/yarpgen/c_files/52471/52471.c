/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((max(var_3, var_9))) ? var_7 : (var_0 > 400404)))) ? var_18 : var_18));
    var_21 -= ((-72 ? -1493651945 : 32767));
    var_22 = 28599;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_23 -= ((-((((arr_3 [i_1] [i_1 - 3]) != (5163620770352407788 % 87))))));
                var_24 = (min(var_24, (((+(((((var_15 ? (arr_1 [6] [i_1]) : -87))) ? -87 : ((0 ? (arr_3 [i_0] [i_0]) : (arr_3 [i_1] [i_0]))))))))));
                var_25 = (min((arr_2 [i_0] [i_1] [i_0]), var_8));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_26 = (((arr_1 [i_0] [i_1]) << (var_1 - 71)));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] [i_0] [i_2] [i_0] [i_0] = (!(arr_2 [i_1 - 1] [i_1 - 2] [i_0]));
                                var_27 = (min(var_27, -2780118692715490900));
                            }
                        }
                    }
                    arr_12 [i_0] [i_1] = ((-((var_4 ? (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_9 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2])))));
                }
                arr_13 [i_0] [i_1] = (var_17 ? var_7 : (arr_5 [i_0] [i_0] [i_0] [i_0]));
            }
        }
    }
    #pragma endscop
}
