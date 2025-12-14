/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((((((var_4 >> (65535 - 65526))) - (((var_3 >= (arr_3 [i_0] [i_1])))))) >> (((((((arr_4 [i_0]) || 3))) <= (var_4 >> 1))))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_9 [2] [i_1] [i_2] = (((((((arr_1 [i_1] [i_2]) * (arr_4 [i_2]))) >> ((((1400688028 >> (1400688041 - 1400688029))) - 341902))))) && ((((((16495 >> (var_9 - 27088)))) - (var_13 ^ 482921277)))));
                    arr_10 [i_0] [i_1] [i_1] = (((((((var_9 && (arr_0 [13]))) && (((arr_8 [16] [16]) || var_8))))) >> (((((51 >> (3812046022 - 3812046015))) > 79)))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 -= (((((482921289 / 98) >> (0 + 0))) >> (((((var_12 - var_9) ^ ((((arr_12 [i_0]) && 125))))) - 36628))));
                                var_16 -= (((((((arr_16 [4] [i_1] [i_2] [i_3] [1]) >> (arr_17 [i_3] [i_0] [i_3] [i_3 - 1] [i_4]))) - (var_3 | 1))) == ((((-79 - var_10) <= (65535 + var_7))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (((((3812046005 | var_13) & (28 | 0))) | ((((var_8 ^ var_8) | (var_8 ^ var_0))))));
    var_18 = (((((65535 && 1400688028) | (var_13 != var_14))) + (1400688027 || 3840)));
    #pragma endscop
}
