/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((16768 >= 2029517559) ? (max(var_1, (var_16 > -400456039))) : ((((65 ? -87 : 65524)) ^ var_13))));
    var_19 ^= (var_13 & (min(var_17, -1889276857)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (min(var_14, (!-1889276868)));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((max(((((117 || -6474716928073498543) << (((min(91, var_7)) - 63))))), ((8345913973799296695 >> (var_10 - 1150362252530804722))))))));
                                arr_16 [i_0] [11] [i_0] [i_3] [i_2] [i_0] [i_0] = (min(21025, 1));
                                var_21 = min(var_17, ((((max(1, 11122))) ? var_0 : 12)));
                                arr_17 [i_0] [i_0] = (((~121) || 65516));
                                var_22 = (max(var_22, (((((var_3 ? (arr_9 [0] [i_2 - 1] [0]) : (arr_9 [4] [i_2 + 1] [4]))) / (arr_9 [6] [i_2 + 3] [6]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
