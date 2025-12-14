/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_7, var_17));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = ((arr_0 [i_0]) ^ (((max((arr_1 [i_0] [i_0]), (arr_2 [i_0]))) | ((((arr_0 [i_0]) ^ (arr_3 [i_0])))))));
        arr_5 [i_0] [i_0] = (arr_3 [i_0]);
        var_20 = (((max(((3221225472 >> (7364573515511242339 - 7364573515511242337))), (arr_0 [i_0]))) / ((max((arr_0 [i_0]), (((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_21 = (arr_0 [i_1]);

        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            var_22 -= (((arr_1 [i_2 + 3] [i_2 + 3]) ? ((((arr_6 [i_1]) - (arr_10 [i_1] [2] [i_2])))) : (-7364573515511242336 & 1)));
            arr_13 [i_2 + 3] [i_1] = (((((arr_12 [i_1]) & (arr_11 [i_1]))) | (((arr_3 [i_1]) >> (((arr_6 [i_1]) - 616242388))))));
        }
        arr_14 [i_1] [i_1] = ((((arr_6 [i_1]) ? (arr_12 [i_1]) : (arr_7 [i_1]))));
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_17 [i_3] = (arr_15 [i_3]);
        arr_18 [i_3] [i_3] = (((arr_16 [i_3] [i_3]) ? (((2235644535109992313 ? (max(251, (arr_15 [i_3]))) : -126))) : 1073741824));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            arr_21 [i_3] = (-7364573515511242340 - 1);
            var_23 = ((arr_16 [i_3] [i_4]) | (arr_16 [i_3] [i_4]));
            arr_22 [i_4] [1] &= ((arr_16 [i_4] [i_4]) - (arr_20 [i_4]));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
        {
            arr_27 [i_3] = (arr_19 [i_3]);
            arr_28 [1] [i_3] [i_5] = ((((-110 + 2147483647) >> (1518623159 - 1518623150))));
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_24 = (min(var_24, ((((((arr_1 [i_6] [4]) + (arr_30 [i_6]))) / 2664521391)))));
        var_25 = (arr_26 [i_6] [i_6]);
        var_26 = (max(var_26, ((((arr_0 [16]) - (arr_1 [i_6] [i_6]))))));
        var_27 = (max(var_27, ((((arr_24 [i_6] [i_6] [i_6]) ? (arr_24 [i_6] [i_6] [i_6]) : (arr_24 [i_6] [i_6] [i_6]))))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_28 = (((((((6706421373103832865 ? 34467 : 1484044719)) ^ (arr_24 [i_7] [i_7] [i_7])))) ^ (((arr_33 [i_7]) ? (max((arr_25 [i_7] [8] [8]), (arr_16 [10] [10]))) : ((max((arr_29 [16]), (arr_1 [i_7] [i_7]))))))));
        var_29 = (max((max(120, ((0 + (arr_32 [i_7] [i_7]))))), (((max((arr_0 [i_7]), (arr_25 [0] [0] [24]))) / (arr_24 [i_7] [i_7] [i_7])))));
        var_30 = (((max((((arr_2 [i_7]) * (arr_20 [i_7]))), (arr_26 [1] [1]))) / (((max((max((arr_19 [14]), (arr_32 [i_7] [i_7]))), (arr_33 [i_7])))))));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        arr_36 [i_8] [i_8] = ((((((arr_0 [i_8]) ? (arr_32 [i_8] [i_8]) : (arr_2 [i_8]))))) - (max((arr_23 [i_8] [i_8]), (arr_16 [i_8] [i_8]))));
        arr_37 [i_8] = (((((arr_20 [i_8]) + ((max((arr_2 [i_8]), (arr_31 [i_8])))))) - ((max((arr_3 [i_8]), (((arr_1 [i_8] [i_8]) - (arr_29 [i_8]))))))));
        arr_38 [i_8] = ((((((arr_26 [i_8] [i_8]) | (max(1627751122, 15663104041480573820))))) ? (((arr_24 [i_8] [i_8] [3]) | (arr_19 [i_8]))) : (arr_19 [i_8])));
        var_31 = (max((arr_32 [i_8] [i_8]), (((arr_33 [i_8]) & 9205357638345293824))));
    }
    #pragma endscop
}
