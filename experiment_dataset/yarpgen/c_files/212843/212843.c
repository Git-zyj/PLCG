/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((!-6926301900464205728) + (17592186044416 / var_14))) + 9223372036854775807)) << (32762 - 32762)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_21 = (((((((-9223372036854775806 & var_16) + 9223372036854775807)) + 9223372036854775807)) >> (var_8 + 619252266514863135)));
        var_22 = ((-17592186044397 ? 16383 : -7324));
        arr_4 [i_0] [1] = (~-8231219870578605263);
        var_23 = (((-6533394334149497855 + 9223372036854775807) << (1028592422686263741 - 1028592422686263741)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                {
                    var_24 = (arr_7 [i_2 + 2] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_25 = ((524287 ? (arr_13 [i_2 + 2] [i_1]) : var_18));
                                var_26 = (-6606646144949368705 || var_5);
                                var_27 = ((var_14 ? ((var_16 ? 9201580495969190934 : 9223372036854775806)) : -var_13));
                            }
                        }
                    }
                }
            }
        }
        var_28 &= ((-17592186044410 ? -9223372036854775806 : -7173535574842072202));
    }
    var_29 = var_5;
    var_30 |= (max((((-(!17592186044396)))), (((2147483647 ? 7736749032708153299 : var_5)))));
    #pragma endscop
}
