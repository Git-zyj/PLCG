/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_12 & ((var_4 ? var_12 : var_12)))) | ((((((min(var_0, var_1))) && (((var_0 ? var_17 : var_8)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_21 = (((((var_17 / var_15) >> (((~var_14) + 39)))) << (((((var_4 + var_14) & (var_4 + var_14))) - 106))));
                    var_22 = (min(var_22, (((((var_1 << ((((var_16 << (var_13 - 196))) - 32243698)))) ^ (((var_15 >= (var_15 || var_2)))))))));
                    arr_7 [i_0] [i_1] [i_0] = ((((((var_4 ? var_17 : var_5))) ? var_16 : (max(var_18, var_15)))) << ((((((var_1 ? var_8 : var_10)) + (var_1 - var_13))) - 79)));
                    var_23 = ((((((5136413194705657014 != 236) ? (var_2 % var_17) : ((var_9 ? var_18 : var_12))))) ? ((((var_4 <= (var_19 >= var_18))))) : (((var_17 / var_10) + var_6))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [3] [0] [i_1] [0] = (min((((var_3 <= var_16) - (var_13 + var_16))), (var_6 <= var_12)));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [9] = (((var_7 * var_16) % ((((var_17 ? var_18 : var_2)) | (min(var_15, var_7))))));
                                var_24 = (((~var_8) - ((var_7 ? var_4 : var_1))));
                                var_25 = ((((((((var_6 << (var_16 - 236)))) == ((var_13 ? var_6 : var_15))))) % var_11));
                                arr_17 [i_0] [i_2] [i_2] [13] [6] [6] [i_1] = ((-9223372036854775807 - 1) + 3885273184378290371);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
