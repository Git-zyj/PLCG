/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_6));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            var_21 = (arr_2 [i_0]);
            arr_4 [i_1 + 2] [i_0] [i_0] = ((var_11 >= (arr_2 [i_0])));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            arr_16 [i_2] [i_4] = -6344713174343834245;
                            arr_17 [i_2] [i_3 - 1] = ((1214824538 ? -7781 : (-32 < 1214824527)));
                            var_22 += (arr_10 [i_0]);
                            var_23 = (max(var_23, 2183850660));
                        }
                    }
                }
            }
        }
        arr_18 [i_0] [i_0] = (arr_10 [i_0]);
        arr_19 [i_0] = (~3080142773);
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            {
                arr_26 [i_5 + 3] [i_6 + 1] = max(((((3574546443 || (arr_23 [i_5 - 1] [i_6 + 1]))) && (-9186953808930015666 && -9223372036854775802))), 65);
                var_24 |= ((((((!720420843) ? 1040869455 : (arr_25 [i_5 + 3])))) ? -9223372036854775794 : (arr_23 [i_6 + 1] [i_5 + 1])));
            }
        }
    }
    var_25 = var_6;
    #pragma endscop
}
