/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = (((((~((var_1 ? var_7 : var_4))))) ? (((min(var_5, 255)))) : (var_0 * var_4)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 &= var_7;

        /* vectorizable */
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            var_13 *= (((arr_0 [i_1 + 1]) ? var_3 : (arr_2 [i_1 - 2])));
            var_14 = (min(var_14, (arr_3 [i_1 + 3] [i_1 - 2])));
            var_15 = (max(var_15, var_5));
        }
        var_16 = ((((max(((max(-28, 1))), ((0 ? var_6 : var_6))))) ? (((arr_2 [4]) ^ var_7)) : (arr_3 [i_0] [i_0])));
        arr_4 [i_0] = ((((((arr_3 [i_0] [i_0]) ? (arr_2 [i_0]) : var_5))) ? ((~(arr_1 [i_0]))) : (arr_2 [i_0])));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_17 = ((((((((28 ? 0 : (arr_5 [i_2])))) ? (var_3 | 25) : ((1 ? -64 : (arr_5 [i_3])))))) & (((((4294705152 ? -10336 : var_5))) ? -4294705148 : ((-10335 ? (arr_12 [12] [i_3] [i_4] [1]) : -4294705152))))));
                            var_18 = (((31166 & (arr_12 [i_5 + 2] [i_5 + 1] [10] [i_5 + 2]))));
                        }
                    }
                }
                var_19 *= (!(arr_11 [i_3]));
                var_20 = ((+(max(((75 ? (arr_10 [i_2] [i_2]) : var_6)), (arr_7 [i_2] [i_3])))));
                arr_15 [i_3] = 65535;
                var_21 = (arr_11 [i_2]);
            }
        }
    }
    #pragma endscop
}
