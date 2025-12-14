/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 2147483647;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_2] = ((+(min((arr_3 [i_0 - 2]), var_15))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_16 [1] [i_4] = (min((~var_10), ((((min(29566, 133955584))) ? (var_3 >= 7680) : 7235))));
                                arr_17 [12] [6] [i_2] [i_3] [i_4] = (min((((arr_3 [1]) ? (~0) : ((var_19 ? 7235 : var_18)))), 7680));
                                arr_18 [i_4] [i_1] [i_1] [i_1] [6] [15] = ((!(7680 ^ -85279431)));
                                var_21 = ((+(min(var_16, ((((arr_11 [3] [i_0] [i_0] [i_0]) / var_18)))))));
                            }
                        }
                    }
                    arr_19 [11] [i_1] [i_1] [11] |= ((((((((arr_9 [i_0]) ? (-32767 - 1) : 581966801))) != -7681)) ? (((max(0, (2255417472 <= var_6))))) : (((-1 - 65535) - (((arr_13 [6] [i_1] [i_1] [i_1]) - 0))))));
                    arr_20 [3] [i_1] [12] [1] = ((((var_5 + 9223372036854775807) << (((((arr_12 [i_0 - 2] [i_0] [i_1] [i_2 + 1]) + 1644910116)) - 23)))));
                }
            }
        }
    }
    var_22 &= var_5;
    var_23 = 27864;
    #pragma endscop
}
