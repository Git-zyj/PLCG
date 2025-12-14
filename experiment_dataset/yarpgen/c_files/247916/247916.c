/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 6557;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 ^= var_9;
        var_15 = (min(var_15, (((var_7 && (((-(((var_3 < (arr_0 [i_0]))))))))))));
        var_16 = ((-596425975 ? (arr_0 [i_0]) : (~var_7)));
        var_17 |= var_11;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_18 ^= -1764499346;
        arr_4 [i_1] = (((arr_2 [i_1]) > var_1));
    }

    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        var_19 = (max(2782600983, 6615537772108461196));

        for (int i_3 = 4; i_3 < 19;i_3 += 1) /* same iter space */
        {
            var_20 = (max(var_20, (~var_3)));

            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                var_21 = (max(((((arr_8 [i_3] [i_3 + 2]) ? (arr_8 [i_3] [i_3 + 1]) : (arr_8 [7] [i_3 - 3])))), 6615537772108461191));

                for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    var_22 = ((-(((max((arr_8 [i_2] [3]), 11831206301601090412)) % 11831206301601090419))));
                    var_23 = ((6615537772108461196 ? 11831206301601090420 : 6615537772108461195));
                    var_24 = var_3;
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                {
                    var_25 &= (((var_1 < var_5) && var_5));

                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_26 = (((arr_10 [i_3 + 1] [i_3 + 2] [11] [i_3 + 1]) ? (arr_10 [i_3 - 3] [i_3 - 2] [i_3] [21]) : (arr_10 [i_3 + 2] [i_3 + 1] [i_3] [i_3])));
                        var_27 = var_1;
                        var_28 = (max(var_28, (~var_10)));
                        var_29 = (min(var_29, (arr_15 [i_2] [20] [i_6])));
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                    {
                        var_30 += var_5;
                        var_31 ^= (((11831206301601090420 - (arr_23 [i_3] [i_3] [7] [i_6] [i_2]))));
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                    {
                        var_32 = (arr_22 [i_6] [i_2]);
                        arr_28 [i_2] [i_3] [i_4] [i_6] [i_2] [i_4] = (var_2 == 6615537772108461184);
                        var_33 += ((!(arr_6 [5] [5])));
                    }
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                {
                    var_34 ^= -11831206301601090426;
                    var_35 = var_8;
                }
                for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                {
                    arr_34 [i_2] = (max((((!(arr_26 [i_2 - 2] [i_3 - 1] [i_2 - 2])))), (min((arr_1 [i_2 - 1] [12]), var_3))));
                    var_36 ^= ((((~(min(6615537772108461188, 6615537772108461168)))) < (((arr_26 [i_2] [i_2 - 2] [i_2 - 2]) ? (arr_21 [i_4] [i_3] [i_3] [i_3] [i_11] [i_2] [i_11]) : (((((arr_16 [i_2] [i_3] [6] [6] [6]) >= var_5))))))));

                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        arr_37 [i_2] [i_3] [19] [19] [i_2] = (((max((arr_20 [i_2] [i_2] [9] [i_2 - 2] [i_2] [i_2]), (6615537772108461195 * var_1)))) ? ((((~11831206301601090431) == (arr_33 [2] [i_3 - 3] [i_3 + 1])))) : (((!(arr_14 [i_2] [i_3] [i_3])))));
                        var_37 = (((arr_11 [i_11] [i_11] [i_11]) ? 11831206301601090431 : 6615537772108461184));
                        var_38 ^= ((((!(~11831206301601090434))) ? (11831206301601090432 - var_8) : ((((min(11831206301601090420, 11831206301601090427)))))));
                    }
                    arr_38 [i_2] [i_2] [i_2] [i_2] [i_2] = (((((11831206301601090397 ? 6615537772108461196 : 6615537772108461196))) ? 11831206301601090416 : 11831206301601090409));
                }
            }
            for (int i_13 = 2; i_13 < 21;i_13 += 1)
            {

                /* vectorizable */
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    var_39 = (min(var_39, 11831206301601090432));
                    var_40 = (((arr_16 [i_13 - 2] [i_14] [0] [i_13 - 2] [i_2]) ? 11831206301601090418 : (arr_14 [i_2] [i_13 + 1] [9])));
                    var_41 = (arr_11 [14] [14] [i_3 - 3]);
                }
                var_42 = var_8;
            }
        }
        for (int i_15 = 4; i_15 < 19;i_15 += 1) /* same iter space */
        {
            var_43 |= var_3;
            var_44 += (arr_39 [i_2] [12] [12] [i_15]);
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 14;i_16 += 1)
    {
        arr_48 [7] = var_10;
        var_45 = (min(var_45, ((((arr_12 [8] [i_16] [i_16] [1]) & 11831206301601090432)))));
    }
    #pragma endscop
}
