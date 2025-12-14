/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((((~-21917) ^ ((var_11 ? var_2 : 10))))) ? ((~((1 ? var_1 : var_11)))) : (~var_12))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = (((min((arr_0 [i_2 - 1]), (arr_0 [i_2 + 3]))) ? (((((arr_0 [i_2 - 1]) < (arr_4 [12] [i_1 - 2] [i_2 - 3]))))) : 21917));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_16 = ((!(((var_2 * (-32757 > 246))))));
                        var_17 = var_7;
                        arr_8 [i_2] = ((-((127 ? var_0 : var_10))));
                        var_18 = ((~(((((-(arr_0 [i_3 - 1])))) ? var_6 : ((var_1 ? var_2 : var_9))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_19 ^= (((arr_2 [i_4 - 1] [i_2 - 2]) ? 255 : 1));
                        var_20 = ((var_8 == (arr_7 [i_4] [i_2 - 3] [i_2 + 2] [i_1 - 2] [i_0] [i_0])));
                        arr_12 [i_0] [i_2] = (--2147483647);
                        arr_13 [i_2] [8] = var_2;
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_21 = 8388600;
                        var_22 = (max(var_22, 268435424));
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        arr_19 [i_0] [i_0] [1] [i_0] [i_0] [i_2] = ((var_8 / (-2147483647 - 1)));
                        var_23 = ((~((~(arr_2 [i_0] [5])))));
                        var_24 = ((8388598 ? ((7 ? 238 : var_1)) : (arr_18 [i_0] [i_1] [6] [1] [9] [2])));
                        arr_20 [i_2] [i_1] [i_2] = var_7;
                    }
                    var_25 = (((min(8361, -1)) | (arr_1 [i_1] [i_0])));
                    arr_21 [i_0] [i_2] [i_2] = (~var_2);
                }
            }
        }
    }
    var_26 |= (((((~var_3) & ((57174 ? var_10 : 5)))) == 3));
    var_27 = var_7;
    var_28 |= ((((var_1 ? var_8 : -21918)) * 1));
    #pragma endscop
}
