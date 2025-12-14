/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_12 = (-((max(var_2, -8))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_13 = (!11);

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                var_14 = (max((max(var_1, var_8)), ((((((0 ? 17 : var_10))) && 30)))));

                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_15 = (min((min(2147483647, 8699104756413224363)), -var_3));
                    var_16 = (!((max((-2147483647 - 1), (min(-8699104756413224363, 0))))));
                    arr_10 [i_0] [i_0] [i_1] [i_2] [i_1] = (((1780019075 ? 536870910 : 18446744073709551605)));

                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_3] [i_4 - 1] = (((min((-81611858 > -96), (min(var_9, var_0)))) | 0));
                        var_17 *= var_3;
                        arr_15 [i_0] [12] [12] [i_2] [i_3] [i_2] [i_4] |= 0;
                        var_18 += ((max(var_11, var_0)));
                    }
                }
                var_19 = (max(var_19, ((((var_3 ? 65535 : (min(19, 65530))))))));
            }
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {

                for (int i_6 = 4; i_6 < 18;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_20 = var_8;
                        var_21 = (((var_9 | 80) ? ((min(168, var_3))) : (!-997777863)));
                        arr_26 [i_0] [i_0] [i_0] [7] [i_0] [i_0] [i_0] = (max(((min(-109, -109))), 7));
                    }
                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        var_22 |= (var_3 * 231);
                        var_23 *= ((-25460711938856620 ? 16154545481683215423 : ((min(var_1, -65535)))));
                        var_24 *= ((((max(22112, (~-97)))) ? 1832339440 : 16154545481683215416));
                        var_25 = (-1 ? -109 : 10234);
                        arr_29 [i_0] [i_5] [i_6] = 14878795526313212245;
                    }
                    var_26 = ((((min(-7, var_7))) ? var_8 : var_9));
                }
                var_27 |= var_8;
            }

            for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
            {
                var_28 = (min(var_28, ((min((((max(5682037683453190865, 4294967295)))), var_0)))));

                for (int i_10 = 1; i_10 < 19;i_10 += 1)
                {
                    arr_37 [i_0] [i_0] [17] = ((((((var_6 ? var_5 : 14)))) ? (max(45, (!var_11))) : (min(var_2, (84030775 / var_2)))));
                    var_29 -= (max((((3940630328 ? (max(1832339440, 433858317)) : ((min(0, var_8)))))), (((var_3 / 5682037683453190865) ? 3076931888 : 1581970453))));
                }
            }
            for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
            {
                var_30 = ((var_1 ? (min(1, (-9223372036854775807 - 1))) : ((((((-9 ? 10 : -1073741824))) ? -118 : (max(1174590649, 0)))))));

                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_31 = ((-var_9 ? ((1 ? var_11 : -1832339441)) : ((var_6 ? -109 : var_10))));
                    var_32 = (min(var_32, (((min(16154545481683215423, (-32767 - 1)))))));
                    var_33 = ((min(var_9, var_7)));
                }
                var_34 = (((((var_11 ? (max(var_0, var_0)) : var_8))) ? ((min(((0 ? -109 : var_6)), -64))) : 4294967295));
            }

            /* vectorizable */
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                var_35 = (max(var_35, (((var_4 ? -32 : 0)))));
                arr_47 [i_0 + 3] [i_0] = var_10;
            }
        }
        /* vectorizable */
        for (int i_14 = 4; i_14 < 19;i_14 += 1)
        {
            var_36 += (var_1 % 31);
            var_37 = (~-119);
        }
        for (int i_15 = 1; i_15 < 18;i_15 += 1)
        {
            var_38 = (min(16154545481683215404, 433858329));
            arr_55 [i_0] [i_0] = var_9;
        }
        var_39 |= (max(((320774651 ? var_0 : -6)), var_4));
    }
    for (int i_16 = 2; i_16 < 17;i_16 += 1) /* same iter space */
    {
        arr_60 [i_16] = -64;
        var_40 = (((((var_6 >> (2147483647 - 2147483632)))) ? (min(var_0, var_2)) : -4294967295));
        var_41 ^= (max(1, var_11));
    }
    /* vectorizable */
    for (int i_17 = 2; i_17 < 23;i_17 += 1)
    {
        var_42 ^= var_8;
        var_43 *= ((-(var_4 == 108)));
        var_44 = 6844663661437757879;
    }
    var_45 += var_8;
    var_46 = (!214835706);
    #pragma endscop
}
