/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_9 [i_1] = ((~(((arr_4 [i_1 - 2] [i_1] [i_1]) ^ var_12))));
                    arr_10 [10] [i_1] [i_1 + 3] [10] = (((arr_4 [i_1] [i_1] [i_1]) % (arr_2 [i_0])));
                    var_20 = (((arr_7 [i_2] [i_2] [i_2]) - ((-152 ? (123 / var_4) : 538134008))));
                    var_21 = (arr_7 [i_0] [i_1 - 1] [i_1 + 2]);
                }
                arr_11 [i_1] [i_1] = (((arr_0 [i_0]) <= ((((var_13 || ((max((arr_1 [i_1 - 1]), var_8)))))))));
                var_22 *= (((~957615112317176640) <= 10945));
                var_23 = var_13;
                var_24 = (min(var_24, (1023 != 3254373373)));
            }
        }
    }
    var_25 = (max(((max(var_17, var_5))), ((var_4 ? var_16 : (~var_6)))));
    var_26 = (var_13 - var_3);
    #pragma endscop
}
