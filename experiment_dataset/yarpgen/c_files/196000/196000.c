/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = ((~(arr_2 [i_0])));
        arr_4 [i_0] = (arr_1 [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_20 = -1534330295285305709;
            var_21 -= (((arr_3 [i_1]) != ((~(arr_2 [i_1])))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_22 = (((4004634839 && 6581369487511051697) && (((arr_10 [i_2] [i_1] [i_0]) || -114))));
                arr_11 [i_1] [i_1] [i_2] [i_2] = (arr_1 [i_2]);

                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_23 = (1 / -1389244439925971345);
                    var_24 = (arr_8 [i_0] [3]);
                }
                arr_14 [i_0] = (arr_7 [i_0] [i_1]);
            }
        }
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_25 = (((arr_16 [i_4] [i_4]) + ((max((arr_16 [i_4] [i_4]), (arr_15 [i_4]))))));
        arr_17 [i_4] = arr_16 [i_4] [i_4];
        var_26 ^= (((arr_16 [i_4] [i_4]) + (max(var_4, 18266906401574989385))));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_27 = 28;
        var_28 = ((11 / (arr_18 [i_5] [i_5])));

        /* vectorizable */
        for (int i_6 = 3; i_6 < 9;i_6 += 1)
        {
            var_29 = (min(var_29, 253));
            arr_24 [i_5] = ((+((((arr_6 [i_6 + 2] [i_6] [i_6 + 2]) == (arr_9 [i_5] [i_6 - 1] [i_6 - 3]))))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            var_30 &= (arr_6 [i_5] [i_5] [i_5]);
            var_31 = ((2295483215253512260 ? 43585 : (arr_7 [i_7] [i_5])));
            var_32 = (var_16 || 11);
        }
    }
    var_33 ^= (((max((13380 / 33), (var_1 - -6581369487511051681))) & 22982));
    var_34 = var_14;

    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_35 = 1389244439925971344;
        var_36 = ((((arr_9 [i_8] [i_8] [i_8]) - (arr_9 [i_8] [i_8] [i_8]))) >= ((((arr_9 [i_8] [i_8] [i_8]) > (arr_9 [i_8] [i_8] [i_8])))));
        var_37 *= ((-(arr_6 [i_8] [11] [i_8])));
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        arr_33 [i_9] = (((min(var_1, (arr_12 [i_9] [i_9] [i_9] [i_9] [i_9]))) / (((max(1, (arr_5 [13] [13] [5])))))));
        var_38 = (((((((32 ? (arr_3 [20]) : (arr_16 [i_9] [i_9]))) != ((((arr_10 [i_9] [i_9] [i_9]) || var_12)))))) < (((arr_13 [i_9] [i_9] [i_9]) + 64654))));
    }
    for (int i_10 = 2; i_10 < 18;i_10 += 1)
    {
        var_39 = ((((((251 + (arr_9 [i_10] [i_10] [12]))))) > (arr_7 [i_10 + 1] [i_10 - 2])));

        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            var_40 ^= ((214 & (((((arr_16 [i_10] [i_10]) ? 194 : var_10))))));

            /* vectorizable */
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {

                for (int i_13 = 2; i_13 < 16;i_13 += 1)
                {
                    var_41 = 199;
                    var_42 |= (((arr_36 [i_13 - 1]) * (arr_13 [i_13] [7] [i_13 + 2])));
                    arr_45 [i_10 + 1] [i_12] [i_12] [i_10 + 1] [i_10] = 73;
                }
                arr_46 [i_12] [i_12] = ((((((arr_43 [i_10 - 2]) - (arr_10 [i_12] [i_12] [i_12])))) - (arr_2 [i_10 - 1])));
            }
        }
        var_43 = (max(var_43, ((((((min((arr_35 [i_10]), 1)))) == ((22 & (~2))))))));
        var_44 = (min((((arr_31 [8]) - ((2905637886 >> (var_1 - 434175734))))), (((!(arr_44 [i_10] [i_10]))))));
        arr_47 [6] = (((((217825734 ? 60 : (arr_35 [i_10 - 2]))) == (((var_9 < (arr_15 [i_10])))))));
    }
    #pragma endscop
}
