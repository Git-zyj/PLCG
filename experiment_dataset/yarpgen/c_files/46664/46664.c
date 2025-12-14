/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 = (((!480) || ((((480 || var_5) ? ((min(-480, 16256))) : 480)))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_15 = var_12;
        var_16 = 473;
        var_17 = (max(var_17, ((((-(var_12 % var_11)))))));
        var_18 += ((~(((((~65527) + 2147483647)) >> (((~var_11) + 70))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    {
                        var_19 = (max(var_19, (((var_1 ? 23494 : var_10)))));
                        arr_11 [i_0] [12] [i_2 + 3] [i_3] = var_4;
                    }
                }
            }

            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_20 -= ((((var_10 ? 483 : 497)) <= 15));
                            var_21 = (~0);
                            arr_23 [i_5] [16] [i_5] [i_6] = -29561;
                            var_22 = (min(var_22, -464));
                            var_23 = (max(var_23, (29560 / -29580)));
                        }
                    }
                }
                arr_24 [14] [1] [1] = (-507 && (!var_3));
                var_24 &= (~40213);
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            var_25 = -29560;
            var_26 *= (-64 / (192 - -29561));
        }
        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            var_27 = var_7;
            var_28 *= ((var_11 | (!-480)));
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_32 [i_9] = ((~(min((57344 % var_10), -var_1))));
        var_29 = 268173312;
        var_30 = (min(((268173300 ? var_4 : var_6)), (15872 >= 1)));

        for (int i_10 = 1; i_10 < 10;i_10 += 1) /* same iter space */
        {
            arr_37 [i_10] [8] [i_10 + 2] = ((((min(var_10, 192))) ? (min(8191, 268173295)) : (var_6 & -114)));
            var_31 *= (((((~(var_10 && 126)))) || ((((((var_3 ? 484 : var_12))) ? ((268173312 ? var_10 : var_10)) : (min(0, var_10)))))));
            var_32 = (!130);
            arr_38 [i_9] [i_9] [i_9] = var_9;
        }
        for (int i_11 = 1; i_11 < 10;i_11 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        {
                            var_33 = -0;
                            var_34 |= (0 > 6758707935095322626);
                        }
                    }
                }
                var_35 = (max(var_35, ((((126 % 10) ? ((var_7 / (-127 - 1))) : (~var_12))))));
            }
            for (int i_15 = 3; i_15 < 10;i_15 += 1)
            {
                var_36 = (max((max((!-91), (26859 && var_11))), (((-22051 && 718) || (var_0 || 126)))));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 12;i_17 += 1)
                    {
                        {
                            var_37 = (max(var_37, ((max(6008263888007528393, 1)))));
                            arr_54 [i_11] [i_16] = (min(17, 17130));
                            var_38 = (min(4321434586473011758, 5366062775618224474));
                            var_39 = (max(var_39, (((((-84 ? (min(var_2, 0)) : (255 == var_9))) == 130)))));
                            arr_55 [i_9] [i_9] [i_11] [i_11] [i_16] [i_17] = (((((1 ? 1 : 14))) != (((((2 ? -32179 : -5366062775618224475)) >= (-32767 - 1))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 12;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 12;i_19 += 1)
                    {
                        {
                            var_40 = ((((max((5366062775618224474 / -15), 32750))) ? (max(32721, 6973215917881725022)) : (((min(31, var_1))))));
                            arr_61 [i_9] [i_9] [i_19] [11] = ((~(~32178)));
                        }
                    }
                }
            }
            for (int i_20 = 0; i_20 < 12;i_20 += 1)
            {
                var_41 = -10;
                var_42 = max(1, ((-14 ? -32756 : 1)));
            }
            /* vectorizable */
            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                var_43 = (~12438480185702023247);
                var_44 = (max(var_44, var_4));
                var_45 = var_3;
                var_46 *= ((0 || (26 & 34)));
                var_47 = (min(var_47, (((((var_6 ? var_6 : -5853384738325915894)) + 251)))));
            }
            var_48 = (min(var_48, 1459));
            var_49 = (min(((min(var_6, var_12))), 35182224605184));
            var_50 = (max(var_50, ((((((var_12 ? (!var_9) : (!var_4)))) ? (((!(254 >= var_11)))) : var_9)))));
            arr_67 [1] = (!-98);
        }
        for (int i_22 = 0; i_22 < 12;i_22 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 12;i_23 += 1)
            {
                for (int i_24 = 2; i_24 < 10;i_24 += 1)
                {
                    {
                        var_51 ^= (((-((max(var_8, 64076))))));
                        var_52 = ((var_9 != -var_5) / ((((17448 % var_3) > (94 || 1023)))));
                        var_53 = (((0 / 10011) ? (0 % var_11) : var_4));
                    }
                }
            }
            arr_75 [i_9] [i_9] [i_22] = 32464;
        }
        for (int i_25 = 0; i_25 < 12;i_25 += 1) /* same iter space */
        {
            var_54 = (min(var_54, (((+((((4294967040 >= 0) > ((1460260445 ? 1 : 4294967065))))))))));
            /* LoopNest 2 */
            for (int i_26 = 1; i_26 < 10;i_26 += 1)
            {
                for (int i_27 = 3; i_27 < 8;i_27 += 1)
                {
                    {
                        arr_86 [i_26] [i_26] [i_25] [i_26] = (-72 ? 64076 : 4294967040);
                        arr_87 [i_26] [i_26] = var_4;
                        arr_88 [i_27] [i_26] [i_26] [i_27 - 3] = ((~(((var_7 != ((max(-1, 50))))))));
                    }
                }
            }
            var_55 = ((8 / 10023) / ((4 ? 3163 : 1)));
            arr_89 [1] [i_9] [i_9] = ((((max(10023, -var_9))) ? (min(((var_6 ? 263 : var_8)), (10021 % 134217727))) : (((4294967049 ? (!817314984) : var_2)))));
        }
    }
    var_56 = var_10;

    for (int i_28 = 3; i_28 < 10;i_28 += 1)
    {
        arr_92 [i_28] = -var_7;
        var_57 &= ((~(var_9 != var_2)));
    }
    #pragma endscop
}
