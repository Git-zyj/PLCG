/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((-(max(var_0, var_16))))) ? var_5 : (((var_4 > var_11) ? (var_4 > var_13) : 21746))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_0] [i_0] = 54;
                    arr_7 [i_2] [i_0 - 1] [i_2] [15] = (min(((-var_3 ? ((max(var_6, -1508))) : (!var_9))), ((min((!54), (var_14 < -32139))))));
                }
            }
        }
        arr_8 [i_0 + 3] [i_0] = ((~-11) ^ -var_11);
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {

                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_18 = ((596074937 ? ((-105 ? var_10 : -30409)) : var_16));
                            var_19 ^= ((var_6 & (var_6 == var_8)));
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] = var_3;
                            arr_26 [i_3] [i_4] [i_5] [i_6 - 2] [i_8] = ((-(max(var_15, var_13))));
                            arr_27 [i_8] [i_6 - 1] [10] [10] [i_4] [i_3] = ((~(max(var_15, var_11))));
                        }
                        var_20 = (((((((var_6 ? -13 : var_1))) ? (min(var_9, var_16)) : (((var_6 ? 54 : var_4))))) / ((min((var_0 > var_9), (-38 + -12238))))));
                    }
                    arr_28 [i_3] = (min((21746 + var_4), ((var_1 - ((var_16 ? var_0 : var_9))))));
                    var_21 &= ((-((min((min(190, var_14)), (!var_11))))));
                    var_22 = (max(var_22, ((((((21748 ^ (!21381)))) ? -14172 : (var_12 && var_12))))));
                }
            }
        }
        arr_29 [7] = (~-var_16);
        arr_30 [i_3] = (min((3395879919 == 2042152280), ((((max(var_1, var_10))) ? var_12 : (max(var_0, var_16))))));
    }
    var_23 = ((var_4 > ((-(-32767 - 1)))));
    var_24 = ((((-((min(var_12, var_5))))) * ((var_0 ? (-32 / var_6) : -var_4))));
    var_25 = ((-253 && (+-1255278489)));
    #pragma endscop
}
