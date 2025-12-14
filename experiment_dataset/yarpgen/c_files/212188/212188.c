/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_3 && ((max((max(var_1, var_9)), ((1 ? var_0 : -6841494434334238799)))))));
    var_11 = (((((((var_5 >= -2397650287519974142) <= ((max(var_2, var_3))))))) * var_4));
    var_12 |= var_3;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_13 |= ((var_2 < ((var_7 ? 3992459130 : 1))));
        var_14 *= ((max(24418, (min(-190, 10)))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_15 = ((!(((((max(1, -117))) ? (min(9223372036854775807, var_9)) : 4294967281)))));
            var_16 &= ((((min(0, 7871739231862717685))) ? ((var_1 ? var_8 : 233)) : ((((min(4635863772770855739, var_1))) ? var_8 : 251))));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_17 -= ((var_2 ? ((((max(-28788, -28777))) ? (2927922141 - var_6) : 1608188530)) : ((((((-127 - 1) - 1))) ? (~var_7) : (((max(var_0, 241))))))));
            var_18 = (max(var_18, ((max(((min(-190, (max(190, var_2))))), (((var_8 / 4398046510080) % (((max(23620, 2)))))))))));
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            var_19 -= ((~(max((-127 - 1), 2359036587))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {
                        var_20 = ((-((var_6 ? 59394 : -56))));

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            arr_25 [i_7] [i_4] [i_5] [i_6] [i_7] &= 1367045142;
                            var_21 = (max(var_1, -932440439));
                            var_22 = (max((max((min(1560474281498649481, 932440458)), ((max(var_9, -932440448))))), ((max(var_1, (max(1, var_7)))))));
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_8 = 2; i_8 < 12;i_8 += 1)
            {
                arr_29 [i_1] [i_1] [9] [i_4] = ((((var_9 ? 54159350 : var_4)) < (var_0 / var_1)));
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_23 = (932440439 > 13486364993668279892);
                            var_24 = (((var_0 - -24419) ? (var_5 + 932440438) : (2482464255 + var_4)));
                            var_25 = (5687043685750162376 ^ 8303212643273536521);
                            var_26 |= (((((var_9 ? var_1 : 3571707080))) || 0));
                            var_27 -= (~12417848248718862868);
                        }
                    }
                }
            }
            var_28 = ((!(var_5 > 1560474281498649481)));
        }
        var_29 = var_4;
        var_30 = var_3;
    }
    for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
    {
        var_31 = (max(var_31, (((8303212643273536521 ? (932440439 ^ var_4) : (var_7 < 932440439))))));
        var_32 = (min(var_32, (((var_1 * var_5) && ((max((((-111 ? 1 : 1))), (min(1608188543, -932440429)))))))));
        arr_38 [i_11] = ((max(-10, var_1)));
        var_33 *= (max((((var_6 > var_8) - 18446744073709551615)), (~90)));
    }
    #pragma endscop
}
