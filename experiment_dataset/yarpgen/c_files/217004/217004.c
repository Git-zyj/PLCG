/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (max(9390402690745188576, 13));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (min(var_20, ((((9056341382964363043 ? (-9223372036854775807 - 1) : -1415571040))))));
        var_21 *= ((!((min(1415571040, 9390402690745188573)))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            var_22 = ((1 & (min(9223372036854775807, 27510))));
            var_23 -= (((arr_6 [i_1] [8] [i_1]) % 9056341382964363040));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
        {
            var_24 = var_12;
            var_25 *= ((var_17 && (!-28726)));
            var_26 = (((38044 | 70) ? (((-(arr_9 [i_1] [22] [i_1])))) : ((28709 ? 9056341382964363030 : 27500))));
            var_27 = ((var_14 ? (arr_7 [i_1] [i_3] [i_3]) : -1415571043));
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 3; i_5 < 21;i_5 += 1)
            {
                var_28 = 9390402690745188580;
                var_29 = (max((min((min(38008, var_1)), -4751)), 23774));
            }
            var_30 = (!((((-2147483647 - 1) % 327379727))));

            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                var_31 -= (((((min(140, 4294967295)))) ? -405874287 : 32766));
                var_32 *= (((((32766 ? 2089237627 : 11790218737896690083))) && (arr_9 [i_1] [i_1] [i_1])));
            }
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                var_33 *= ((max((-127 - 1), -23775)));
                arr_23 [i_7] [i_4] = -32758;
                arr_24 [i_1] [1] [i_7] = var_15;
                var_34 -= (min(306285361759302591, 1));
            }
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_35 = var_6;

            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                arr_31 [i_1] [i_8] [8] = (min((min((var_3 <= var_0), (min(-23775, -7483312331418117749)))), (((1 ? (((7 ? -121 : -7410))) : ((925495828 ? 1 : 3687527198)))))));

                /* vectorizable */
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    var_36 = ((1 ? 11166 : 255));

                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        arr_37 [0] [i_8] [i_9] [i_8] = (1 ^ 1);
                        var_37 *= -23774;
                    }
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    arr_42 [i_8] [i_8] [i_8] [i_12] = 1;
                    arr_43 [i_8] = var_3;
                }
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    var_38 *= (min(((max((arr_34 [i_1] [i_1] [i_1] [1] [i_1]), var_18))), 2948936885491624838));

                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        var_39 = max((min(4294967282, 107)), (((var_18 ? var_8 : (arr_8 [i_1])))));
                        var_40 = (min(-23774, (-32767 - 1)));
                        var_41 = (min(231, 2140337773));
                    }
                }
            }
        }
        var_42 -= ((4145889821855696184 ? 13960 : 0));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
    {
        var_43 = (min(var_43, (((var_16 - 114) != 13657388740286062828))));
        arr_51 [i_15] [i_15] = (~19);
        var_44 -= ((4294967293 ? 8385131705705433375 : 10061612368004118227));
        var_45 *= (38360 ? var_6 : (arr_39 [i_15] [i_15] [i_15] [i_15]));
    }
    #pragma endscop
}
