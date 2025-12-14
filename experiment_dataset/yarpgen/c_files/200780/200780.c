/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (max(var_4, 9));
    var_11 = 200;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_12 = (max(((max(200, -524183885))), 3000015585));
                        var_13 = 11827025375862372898;
                        arr_10 [i_2] [i_2] = var_7;
                        arr_11 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2] = var_1;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_14 += ((+(((~4294967287) ? 0 : ((min(195, 511)))))));
                                var_15 = (max(var_15, 4294967287));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 10;i_7 += 1)
            {
                {
                    var_16 = (max(var_16, ((max(1571456080, (max(119, 11827025375862372898)))))));
                    var_17 *= (452424220 >= 124);
                    arr_24 [i_7] [i_6] [i_0] = var_8;
                    var_18 = (max(var_18, (((~(((!3842543092) ? (min(var_3, (-9223372036854775807 - 1))) : (((var_8 ? 4294967268 : var_9))))))))));
                    arr_25 [2] [0] [i_7] = ((var_2 ? (max(1571456079, 14)) : (max((max(69, var_7)), (((0 ? 4 : var_6)))))));
                }
            }
        }
    }
    var_19 &= (((((((200 < 1947526294) - 1617474320)) + 2147483647)) >> (((((-2147483647 - 1) - -2147483643)) + 34))));
    #pragma endscop
}
