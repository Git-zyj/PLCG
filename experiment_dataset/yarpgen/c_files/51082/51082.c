/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 93;
    var_14 = (!4123083447934801262);
    var_15 = ((var_7 ? var_9 : var_3));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_16 = 5748781528740752312;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        var_17 = (var_10 || (arr_6 [i_2] [i_1 + 1]));
                        arr_9 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] = 65525;
                    }
                    arr_10 [i_0] [i_0] [i_1] = var_11;
                    arr_11 [i_0] [i_1] [i_1] [i_1] = -5748781528740752312;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_18 = ((((var_2 || (((65530 ? 93 : var_1)))))));
                                var_19 ^= (((min((var_6 || 0), var_1)) | -var_11));
                            }
                        }
                    }
                }
            }
        }
        var_20 = (min(var_8, (((var_3 || (((var_5 ? var_7 : 42427))))))));
    }
    #pragma endscop
}
