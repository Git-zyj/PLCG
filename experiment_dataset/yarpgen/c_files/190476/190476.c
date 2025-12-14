/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                    {
                        arr_9 [18] [18] [18] [i_3] [i_3] = (3582156447 / 225);
                        arr_10 [i_3] [i_2 - 1] [7] [i_0] &= ((712810846 ? 712810848 : 891641316));
                        var_13 ^= (((219768137 ? 4294967295 : 891641316)) - var_6);
                        arr_11 [i_3] [i_2] [i_1] [1] = ((var_11 ? 3464578547808489305 : 3403325993));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        var_14 -= (11 < 14982164290730137203);
                        var_15 = (min(var_15, (~563708694)));
                        arr_14 [9] [i_1] [i_2] [i_2] [9] = ((var_2 ? 586470408 : var_5));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_16 = (var_0 && 3403325998);
                        arr_17 [i_5] [i_2] [i_1] [i_0] = (!3464579782979414412);
                        arr_18 [i_2] [i_5] [i_2] [i_1] [i_0] [i_0] = 586470408;
                        var_17 = ((563708694 ? 78 : 4294967295));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        arr_23 [18] [i_0] [i_1] [i_0] |= (max((!1), (min(891641312, 1))));
                        var_18 = (~3731258590);

                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            arr_26 [i_6] [i_6] [9] [11] [16] = ((!(((248 ? 2400843451 : 28)))));
                            var_19 = ((!(((-8324410849544447523 ? 239 : 50528)))));
                            var_20 -= (-9223372036854775807 - 1);
                            arr_27 [i_7] [i_7] [i_1] [i_0] [i_1] [i_0] = ((!((((1991745212 <= -52) << (((13491294615590920058 << 9) - 8460559615178765298)))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 24;i_8 += 1)
                        {
                            var_21 = (max(var_21, (!4955449458118631557)));
                            arr_30 [i_8] [i_6] [i_2] [i_1] [19] = (1 >= var_0);
                        }
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            var_22 = (max(var_22, (((-((1 ? (2251799813423104 - 452409569) : var_2)))))));
                            var_23 = (((20253 && 3) ? ((230 ? var_5 : var_4)) : ((255 ? var_2 : (-127 - 1)))));
                            var_24 = -4;
                        }
                    }
                    var_25 = (min(var_25, 1991745214));
                }
            }
        }
    }
    #pragma endscop
}
