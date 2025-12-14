/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = (-1057870366 != 255);
                arr_5 [i_0] = (((((-((var_11 ? 65535 : (arr_3 [i_0] [6])))))) ? (((((-970345566 ? 255 : var_4)) * 0))) : (max(8664336223533847383, -970345566))));
                var_13 = (127 > 0);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_14 = -44;
                    arr_9 [i_2] [i_1] [i_0] |= (1 ^ var_5);
                    arr_10 [i_0] [i_0] [10] [i_2] = (-(arr_2 [i_2] [i_1] [14]));
                    var_15 ^= (((arr_2 [i_2] [i_1] [i_0]) && 898717973));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_16 += ((arr_8 [i_3] [i_1]) ? (((arr_7 [i_3] [i_1] [i_0]) - var_10)) : ((var_4 * ((var_3 ? var_4 : 9695548816802293409)))));
                    arr_14 [i_1] = var_1;
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_17 = ((~(max(((96 ? var_0 : -97)), ((-74 ? 11344 : -11337))))));
                    var_18 = (min(0, 524287));
                    var_19 = (min(var_19, (((~((max(var_8, 0))))))));
                    var_20 = var_5;
                    var_21 = ((65535 ? ((((-24 >= ((min(30221, var_3))))))) : (max((arr_13 [i_1]), (7800513829883165794 + var_1)))));
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    arr_22 [i_0] [i_1] [i_1] [6] = (((((arr_11 [i_5]) % (arr_11 [i_0]))) | 4));
                    arr_23 [i_0] [i_1] [16] [i_1] = (((((2805 ? -9223372036854775807 : 4383376065593171348))) - (max(var_11, var_8))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_29 [i_7] = ((~((~((101 ? 56898 : var_6))))));
                                var_22 = 57211;
                            }
                        }
                    }
                    var_23 = (max(var_23, -32704));
                }
            }
        }
    }
    var_24 = (max(var_2, (((~var_6) ? (~3733343614099744463) : (~11)))));
    var_25 = (max(var_25, ((32704 << (11325 - 11300)))));
    var_26 += var_0;
    #pragma endscop
}
