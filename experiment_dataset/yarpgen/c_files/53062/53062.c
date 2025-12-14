/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 1152921504069976064));
    var_13 -= 16;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_14 -= -16;
        var_15 = (~606123137);

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            var_16 ^= 8388544;
            var_17 -= -16;
            arr_5 [i_0] [7] [i_0] = ((~(!16711218049346895655)));
            arr_6 [i_0] [i_1 + 1] = 0;
        }
        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            var_18 = (min(var_18, 29));
            var_19 = 1;
        }
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_20 = (~241121040);
            arr_15 [i_4] [10] [i_4] |= (!-826302948);
        }
        for (int i_5 = 3; i_5 < 21;i_5 += 1)
        {
            arr_18 [i_3] = 210;
            var_21 = -728550912;
        }

        /* vectorizable */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            arr_21 [i_6] [10] [i_6] |= 15359770696186432545;
            var_22 = (min(var_22, (!-4286578752)));
            var_23 = 2130706432;
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            var_24 = (~142);
            var_25 |= 210;
            arr_25 [i_3] [i_7] [i_3] = (!14055924270320380575);
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_26 = 1977585940;
            var_27 ^= 14055924270320380575;
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            var_28 = 3923523089570289793;
            arr_32 [i_3] [i_9] = 510;
            arr_33 [7] [i_3] = 1;
        }
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 22;i_11 += 1)
            {
                {
                    arr_39 [i_3] [i_10] = 1;
                    arr_40 [i_3] [10] |= ((-((-(~4242)))));
                }
            }
        }

        for (int i_12 = 1; i_12 < 23;i_12 += 1)
        {
            arr_43 [i_3] [i_3] [i_3] = (!1977585940);

            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                var_29 = 66;
                arr_46 [i_3] [i_3] = 4242;
            }
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                var_30 ^= (~0);

                for (int i_15 = 1; i_15 < 22;i_15 += 1)
                {
                    var_31 |= 1;
                    arr_54 [i_3] [i_15] [i_3] [i_15 + 2] = ((-(!-66)));
                    arr_55 [i_3] [6] [i_14] [i_15 - 1] = (!12795882036814592187);
                }
            }
        }
        var_32 ^= -62;
    }
    for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
    {
        var_33 = (!-25333);
        arr_58 [i_16] [i_16] = -303131950;
    }
    #pragma endscop
}
