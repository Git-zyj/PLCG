/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((((((((~8880512548741490294) + 9223372036854775807)) >> (var_0 + 72)))) || (((var_10 ? (var_9 && var_5) : var_1)))));
    var_12 = (min((~1), ((39 ? (1328217739 ^ -8880512548741490277) : ((1922447373 ? 24743 : 17179869182))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = ((1328217721 ? 59 : 40794));
                var_14 = ((min(var_1, (-34 == 13444905694966998464))));
                var_15 = ((var_6 ? (((!((min(var_5, var_2)))))) : (min((var_5 == var_1), ((1 ? 1 : 24747))))));

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = ((~(min(255, var_10))));
                                var_17 = (max((max(var_4, var_4)), (min(5415660112668430138, 1))));
                                var_18 = (max(var_18, ((max(6150288640789495961, -1700086152)))));
                                var_19 = ((((1421961223 ? 221 : 76))) ? (min((~var_4), var_7)) : var_1);
                            }
                        }
                    }
                    var_20 |= min((((var_1 >> (var_5 - 1555344569)))), ((((var_8 || var_0) && ((max(var_0, var_4)))))));
                    var_21 = (min((((633042481 ? -211 : 1))), ((var_8 ? var_3 : var_2))));
                }
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    var_22 -= ((((min(var_3, var_0))) ? ((var_0 ? var_2 : var_3)) : (~var_1)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_23 |= ((((max(((-34 ? var_1 : 255)), (~-34)))) ? 9168181924889883135 : 238));
                                var_24 = (((((-1903083534 ? 7591 : -11512))) ^ var_3));
                                var_25 = (var_6 ? -var_0 : -var_1);
                            }
                        }
                    }
                    arr_22 [i_0] [i_0] [i_0] [i_0] = (4658564433237026931 - 12296455432920055663);
                }
            }
        }
    }
    #pragma endscop
}
