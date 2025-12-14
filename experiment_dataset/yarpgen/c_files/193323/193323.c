/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = (max(((var_0 << (((arr_3 [i_0]) - 53820)))), ((((arr_3 [8]) >= (arr_3 [i_0]))))));
        var_16 += var_6;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = (arr_7 [14] [i_1 - 1] [i_2 + 2]);
                    var_18 -= -var_8;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_15 [i_3] [i_3] [i_3] = 20;
                        var_19 = arr_11 [i_3] [i_0] [i_3];
                        var_20 -= ((var_11 & (min((min((arr_4 [i_5] [i_4]), (arr_13 [i_4] [i_3] [i_4] [i_3]))), (((0 ? 4294967289 : var_1)))))));

                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            arr_18 [i_5] [i_5] [2] [i_3] [i_3] = (var_6 - var_11);
                            var_21 |= var_7;
                            var_22 *= (((((arr_7 [i_0] [i_0] [2]) ? var_12 : (arr_4 [i_5] [i_5]))) >> (var_10 + 4947347932107246038)));
                            var_23 *= (((arr_10 [6] [i_3] [i_4] [i_3]) < (arr_7 [i_0] [i_0] [i_4])));
                        }
                    }
                }
            }
        }
    }
    var_24 -= var_3;
    var_25 = (max(var_25, var_7));
    var_26 = var_4;
    var_27 = var_6;
    #pragma endscop
}
