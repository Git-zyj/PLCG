/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -891836772692392012;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = 8297520670380885141;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = 891836772692392031;
                    var_20 -= (max(((min((-891836772692392012 && 9), 1))), ((-(min(65532, 891836772692392041))))));
                    arr_8 [i_2] [i_2] [i_2] [i_0] = (((((26952 < -662148932) < ((max(16382, 26931))))) && (((((2982289258 >> (1312678042 - 1312678016))) ^ (~2295485472))))));
                    var_21 -= ((14160 << (!26928)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_22 = (min(var_22, (((((max((2982289281 || 1), 10513529855687003055))) && ((((min(6, 1))) || (-17670 && 1312678014))))))));
                                var_23 -= 0;
                                var_24 = (min(var_24, ((((~8314187985378508736) * 0)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        var_25 = ((65524 | (~41761)));
        var_26 -= 26979;
        var_27 = 18446744073709551606;
        var_28 -= ((0 | (0 & 18446744073709551615)));
        arr_17 [i_5] = -864691128455135232;
    }

    /* vectorizable */
    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {
        var_29 = (((~891836772692392020) != 0));
        var_30 = ((255 * (!1)));
        var_31 = (min(var_31, -1312678034));
        var_32 = (5274 % 1);
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        var_33 = (max(var_33, ((max((9251 ^ 1917), ((60353 * ((min(-15524, -61))))))))));
        var_34 = (max((((~1) | (max(-3591406357993733242, 1)))), ((((!9251) << (252 - 238))))));
        var_35 = (min(var_35, (((min((65427 + 1), 32760)) != (!-61)))));
        var_36 -= ((((52853 >> (2368 - 2365))) == (min(((max(9251, 1))), (8191 / 56285)))));
    }
    var_37 = (max(var_37, ((-(max(var_2, -9718))))));
    #pragma endscop
}
