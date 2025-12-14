/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_11 = ((!(arr_1 [i_0])));
        var_12 |= ((((~var_2) & (arr_1 [2]))));
        var_13 = (((arr_1 [i_0]) * ((((((arr_0 [i_0] [i_0]) << 1)) * (-2147483647 - 1))))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_14 = ((~(min((arr_2 [1]), ((var_4 * (arr_0 [i_0] [i_0])))))));
            var_15 = ((~(((arr_0 [i_0] [i_0]) & (arr_3 [i_0] [i_0])))));
            var_16 = (--248);
        }
        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            var_17 |= (min((-9223372036854775798 | 3), ((min((arr_0 [i_0 - 1] [12]), (arr_0 [i_0 - 1] [4]))))));
            var_18 = (((~((max(1, (arr_5 [i_0 - 1] [i_0 - 1] [i_0])))))));
            arr_6 [i_0] [i_0] = (min((min(32766, 3)), (arr_3 [i_0] [6])));
            var_19 = (((((~(((arr_5 [i_2] [i_2] [i_0]) ? 1 : var_10))))) ? -1 : (((arr_1 [i_0]) ^ var_8))));
            var_20 |= (min(var_7, ((((min(var_3, (arr_0 [i_0 - 1] [2])))) ? 0 : ((1 * (arr_1 [4])))))));
        }

        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_9 [i_0] [i_0] [i_0] = (arr_8 [i_0]);
            var_21 ^= (!1);

            for (int i_4 = 3; i_4 < 14;i_4 += 1)
            {
                var_22 = 3;
                var_23 = (max(var_23, (255 | -15)));
                arr_13 [i_3] [i_0] = arr_0 [i_0 + 1] [i_0];
            }
            for (int i_5 = 3; i_5 < 13;i_5 += 1)
            {
                arr_18 [i_0] [i_0] = ((-(arr_2 [i_0 - 1])));
                arr_19 [i_3] [i_0] [i_5] = (((arr_7 [i_0]) & (arr_7 [i_0])));
                var_24 ^= (15 ^ 234881024);
            }
            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                var_25 = (((arr_16 [i_0 + 1] [i_3] [i_6] [i_0]) & var_9));
                var_26 = ((((!(arr_1 [i_0])))) ^ var_10);
                arr_22 [i_0] [i_0] [i_0] = (arr_7 [i_0]);

                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    arr_25 [i_0] [i_0 - 1] [i_3] [i_0] [i_7] = (((((arr_12 [i_7] [1]) >> (var_6 + 155))) ^ (0 | 4294967290)));
                    var_27 = (var_10 & (arr_12 [i_3] [i_7 - 2]));
                }
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    arr_28 [i_0] = arr_26 [i_0] [i_6] [3] [i_0] [i_6 - 1] [i_0];
                    arr_29 [i_6] [i_0 - 1] [i_6] [i_0] = (arr_21 [i_0]);
                    arr_30 [i_0] [i_0] [i_0] [i_8] [i_8] = ((var_7 ? var_0 : 7));
                    arr_31 [i_0] [1] [i_6 + 1] [i_0] [i_3] = (((arr_2 [i_3]) ? (~var_3) : var_10));
                }
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    arr_35 [i_0] [i_3] [7] [i_6 + 1] [i_0] [i_9] = (~var_4);
                    var_28 = 127;
                }
            }
            var_29 = (min(var_29, (arr_20 [i_3] [i_0 - 1] [10])));
        }
        for (int i_10 = 1; i_10 < 13;i_10 += 1)
        {
            var_30 = (arr_4 [i_10]);
            arr_39 [i_0] [i_0] = (((arr_0 [i_10 - 1] [i_0]) * ((max(-22, (arr_0 [i_10 + 2] [i_0]))))));
        }
    }
    var_31 = (min(var_31, (((var_9 ? var_6 : (var_0 != var_3))))));

    for (int i_11 = 2; i_11 < 19;i_11 += 1)
    {
        arr_42 [i_11] = ((~((~((max((arr_41 [6]), (arr_41 [i_11]))))))));
        arr_43 [i_11] [i_11] = (min(((~(arr_40 [i_11 - 2]))), (arr_40 [i_11 + 1])));
        var_32 = ((+(((arr_41 [i_11]) >> (((arr_40 [i_11 - 2]) + 4229718805865472996))))));
        arr_44 [i_11] [1] = ((~(arr_41 [i_11 - 2])));
    }
    for (int i_12 = 3; i_12 < 13;i_12 += 1)
    {
        var_33 = (arr_40 [i_12 - 2]);
        var_34 = (((((18446744073709551611 ? 16646144 : -1))) ? (((~(~1)))) : var_8));
    }
    for (int i_13 = 0; i_13 < 24;i_13 += 1)
    {
        var_35 += (((~6) ? -1 : ((((!(var_9 <= 64)))))));
        var_36 = (1 & 1);
    }
    #pragma endscop
}
