/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_6;
    var_18 = (var_13 | (max(-5499687522531926497, var_16)));

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_19 = (min(var_19, 28));
        arr_3 [i_0] = ((228 << (1343291453884883371 - 1343291453884883353)));
        var_20 += (((((701424286 >> (1912844973 - 1912844947)))) ? (max((arr_0 [i_0 - 1] [i_0 - 3]), (arr_0 [i_0 - 2] [8]))) : (arr_0 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [6] [i_3] = max(((-4291104501118450941 / (var_13 - var_7))), (-17536 - 212));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = (~var_3);
                    }
                }
            }
            var_21 = (max(var_21, ((min(var_0, var_16)))));
            var_22 = 50;
            arr_12 [i_1] = ((var_4 ? (min(var_13, var_3)) : var_15));
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
        {
            arr_16 [i_0] [i_0] [i_0] &= ((+((50 ? (-127 - 1) : -701424295))));
            var_23 &= var_4;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        arr_23 [i_0] [i_0] [i_5] [i_5] [i_6] = min(-8190096364887670397, (min(-8325705599336615982, -701424287)));
                        var_24 = (min(var_24, ((min(1343291453884883373, 133)))));
                    }
                }
            }
            arr_24 [i_0 - 2] [i_0] [i_4] = (562949953421311 % -86);
            var_25 = var_10;
        }
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_26 += (((!148) ? (min(var_5, (~var_4))) : ((((min(37, 9836231133468054994)))))));
        arr_27 [i_7] = 50;

        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                arr_32 [i_7] [i_8] [i_7] [i_9] = var_2;
                arr_33 [i_8] [i_8] [i_7] [i_9] = ((!((((8325705599336615981 && 701424287) + (!86))))));
                var_27 = var_3;
                var_28 = (((246 << (-86 + 106))));
                var_29 = 0;
            }
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                var_30 += (((var_0 ? var_12 : ((var_10 ? var_16 : var_11)))));
                arr_36 [i_7] [i_8] = (min(var_3, (arr_35 [4] [i_7] [i_7] [12])));
            }
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                var_31 = (min(((-(max(-487, var_1)))), (arr_34 [i_7] [i_7] [i_8] [i_11])));
                var_32 = (min(var_32, -8325705599336615977));
                arr_39 [i_7] [i_8] [i_8] [i_7] = var_0;
            }
            var_33 = (min(var_33, var_5));
        }
        for (int i_12 = 1; i_12 < 13;i_12 += 1)
        {
            var_34 = (min(var_34, (((((max(46, 1040308893))) ? (((((max(62992, 131))) ^ (~var_15)))) : var_12)))));
            var_35 = 8140805471973479258;
        }
    }
    var_36 = var_6;
    var_37 *= ((!1040308869) ? var_11 : (-23 >= 0));
    #pragma endscop
}
