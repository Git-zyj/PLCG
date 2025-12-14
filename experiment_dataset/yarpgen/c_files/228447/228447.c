/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (max((min(21109, 317866786)), 2564557563));
                var_18 = (min(var_18, (((-15785 >= (min((var_9 ^ var_2), ((max(-15788, 4294967292))))))))));
                var_19 = max((((-((var_5 ? 1 : 536346624))))), (max((((65535 ? 0 : 15))), -var_2)));
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_20 += 4;
        var_21 ^= max(((-((var_14 % (arr_7 [i_2] [i_2]))))), ((((185 ^ 254) ? (((min(var_0, 99)))) : ((var_14 ? (arr_7 [i_2] [i_2]) : 4294967295))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                var_22 = (min(var_22, ((((arr_7 [i_3] [i_3]) ? var_6 : var_0)))));
                var_23 = var_0;
            }
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                arr_18 [i_3] [i_3] = ((9381 ? (arr_9 [i_3]) : var_16));
                arr_19 [17] [i_3] [i_5] [i_3] = ((1346131025122699302 ? (arr_16 [i_3]) : ((4294967277 ? 8438549172975763617 : -15))));
                var_24 = (~(arr_17 [i_3] [i_5 - 2] [i_5]));
                var_25 ^= ((+((((arr_7 [i_2] [i_2]) || (arr_14 [i_2] [i_2] [1] [i_5]))))));
            }
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                var_26 = ((-1 ? 123 : 1));
                var_27 = ((542178328 ? 86 : -22957));
                arr_23 [i_3] = (arr_16 [i_3]);
            }
            arr_24 [i_3] = var_8;
        }
        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            var_28 = (arr_17 [9] [i_7] [10]);

            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                var_29 = ((1936499794 ? var_8 : (((!3485601248083689931) ? (max(11, 4393751543808)) : (arr_16 [4])))));
                var_30 = 15810;
            }
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                var_31 = var_0;

                for (int i_10 = 4; i_10 < 22;i_10 += 1)
                {
                    var_32 += 836001398;
                    arr_39 [15] = (arr_21 [i_2] [i_10]);
                    arr_40 [i_10] [i_7] [i_7] = 18446744073709551613;
                }

                for (int i_11 = 3; i_11 < 23;i_11 += 1)
                {
                    arr_43 [i_2] [i_9] [i_2] = ((((max((arr_28 [i_7 + 3]), (arr_38 [i_11 - 3] [0] [i_11] [i_11 - 1])))) ? 127 : ((-(max(836001396, 1))))));
                    var_33 = (((((var_16 ? 8438549172975763640 : (arr_10 [i_7 - 1] [i_9] [i_7 - 1])))) ? (min(((((var_3 + 2147483647) << (((var_1 + 1501415292) - 27))))), var_2)) : (((var_7 << ((((min(180, 200))) - 171)))))));
                    arr_44 [5] [i_7] [i_7] = (min(var_7, 4654216547439091085));
                    arr_45 [i_2] [i_11] [11] [i_11 - 1] [i_9] = (arr_11 [i_2]);
                    var_34 += (arr_34 [i_11 + 1] [i_9] [i_7] [i_2]);
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_35 = arr_12 [i_9] [i_7 + 3];
                    var_36 = (min(var_36, 3));
                    var_37 = (arr_37 [i_2]);
                }
                var_38 = (min(var_38, (var_14 && var_15)));
                var_39 = var_0;
            }
        }
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                for (int i_15 = 3; i_15 < 21;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        {
                            arr_59 [i_2] [i_13] [i_14] [i_15] [i_16] = (max(var_12, (~0)));
                            var_40 -= 14562;
                            var_41 += 0;
                            var_42 |= ((((((max((arr_22 [i_14]), var_11))) ? 1 : ((max((arr_38 [i_2] [i_2] [i_15] [i_16]), (arr_7 [i_13] [13])))))) >= 1));
                        }
                    }
                }
            }
            var_43 = (15190 * 71);
        }
    }
    #pragma endscop
}
