/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= -27210;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = 1;

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_20 = (min(var_20, (arr_0 [i_0])));
                var_21 -= ((0 ? (~14875504289848886437) : (arr_1 [i_0 + 1])));
            }
            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                var_22 |= (((arr_6 [i_3 - 2] [i_3] [i_3] [17]) <= (arr_6 [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3 + 1])));

                for (int i_4 = 4; i_4 < 22;i_4 += 1)
                {
                    arr_15 [i_0] [i_1] [i_3 - 2] [i_4] [17] [i_4] = (arr_9 [i_1] [i_1]);
                    arr_16 [i_0] [i_1] [17] [i_4 - 2] = 62;
                    var_23 = -22;

                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        var_24 += var_14;
                        arr_19 [i_0] [i_0] [i_5] [i_1] [i_3] [i_4] [i_5] = var_18;
                        var_25 |= 3571239783860665205;
                        var_26 = ((8611009488629116156 | (arr_17 [i_5 - 2] [i_3 - 2] [i_5] [i_4 - 4] [i_5] [i_3 - 2] [i_1])));
                    }
                }
                arr_20 [i_0] [i_1] [i_1] &= (((((1 ? var_18 : var_5))) ^ (8088122567314554699 | 4553761444091231154)));
                arr_21 [i_0 - 1] [i_0] [i_1] [i_3] = ((~(arr_3 [i_1] [i_3 + 1] [i_3 - 2])));
                arr_22 [20] [i_1] [i_3] [i_3 + 1] = ((~(((arr_14 [i_0] [i_3]) ? 693201466 : var_7))));
            }
            var_27 = (((arr_10 [i_0] [i_1]) ? (arr_7 [i_0] [i_0 - 1] [i_1]) : (arr_10 [i_0] [i_0 + 1])));
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
    {
        arr_27 [i_6] = (524287 | 0);
        var_28 = (((((arr_4 [i_6 - 1]) + 2147483647)) >> 1));
        arr_28 [12] [i_6] |= ((6502399182889491928 - (~var_2)));
    }
    for (int i_7 = 1; i_7 < 22;i_7 += 1) /* same iter space */
    {
        var_29 = (5345893389578876102 == 3898732488);
        var_30 = var_12;
        var_31 = (((var_14 + 9223372036854775807) >> (((((arr_7 [i_7 - 1] [i_7] [i_7]) ? -769175777 : var_16)) + 769175819))));
    }
    var_32 = (((((108 ? -1366562323 : 5345893389578876102))) ? -var_3 : var_13));
    var_33 += var_14;
    var_34 *= 149;
    #pragma endscop
}
