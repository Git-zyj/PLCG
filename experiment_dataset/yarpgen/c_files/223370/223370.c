/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = 44180;
        var_18 = (min((21356 ^ -1947618110), ((29556 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
        arr_4 [i_0] = (((((((arr_2 [i_0]) | 16811)) % (arr_0 [i_0])))) ? (arr_2 [11]) : ((((var_4 < ((3306236662 ? var_16 : 16277703624519618694)))))));
    }
    var_19 ^= var_5;
    var_20 = (1 % (((3306236662 ? 23194 : 35980))));

    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_21 ^= ((+(((!var_13) ? ((48251 ? 1 : 4503599627370495)) : (9719 | 23599)))));
            var_22 = ((9758074394203652345 & (((~(~16811))))));
            arr_12 [i_1] [i_1] [4] = ((((9986 % (((arr_2 [1]) % 6791981849546672033)))) & (max(((((arr_9 [13] [i_1] [i_1]) ^ (arr_5 [i_2])))), (((arr_2 [i_2]) ^ (arr_6 [i_1] [i_1])))))));
            arr_13 [i_1] [i_2] = (min(-1892044302, (~var_14)));
        }
        var_23 = (min(var_23, ((((arr_0 [12]) ? (((arr_10 [i_1]) ? (min(var_5, (arr_9 [6] [i_1] [8]))) : (((3306236662 ? 3306236662 : -30))))) : (arr_7 [i_1]))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            var_24 = (((arr_8 [i_3 - 1]) ^ (arr_6 [i_3 - 1] [i_1])));
                            var_25 = (arr_26 [i_1] [i_1] [i_4] [i_5] [i_6]);
                            var_26 = (min(var_26, ((((arr_15 [6] [i_6]) || (!var_7))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            arr_31 [i_1] [1] [i_4] = (~1);
                            var_27 = (arr_14 [i_5]);
                            arr_32 [i_1] [1] [1] [i_1] [i_7] = ((-(arr_6 [i_3 - 1] [i_1])));
                            var_28 -= (arr_20 [i_3 - 1] [i_3 - 1] [0]);
                        }
                        arr_33 [i_1] [i_1] [i_1] [i_4] [10] [i_5] = (arr_24 [i_1] [i_4]);
                        var_29 = (((!15455) | ((~(arr_6 [i_3 - 1] [i_1])))));
                        arr_34 [i_1] [i_4] [i_1] = ((((((arr_30 [i_1] [i_1] [i_3 - 1] [i_1] [i_5] [6]) ? -var_9 : (((0 ? 0 : 1947618109)))))) ? (((((arr_1 [i_3 - 1] [i_3 - 1]) <= var_5)))) : (((min(0, var_16)) ? (min(var_9, (arr_22 [i_1] [i_3] [13] [i_4] [i_5]))) : var_6))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_30 ^= (((arr_26 [i_1] [i_1] [i_3 - 1] [6] [i_3 - 1]) % (arr_14 [i_8])));
                        arr_37 [i_1] [i_1] [i_4] [i_8] = ((19326 ? ((((arr_29 [6] [14] [i_3 - 1] [i_4] [i_4] [6] [i_8]) ^ 61035))) : (arr_2 [i_3 - 1])));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        var_31 = (((arr_11 [i_4] [i_1]) ? (var_1 & var_8) : (((arr_26 [i_1] [1] [i_3] [i_4] [i_9]) ? 1 : var_5))));
                        var_32 = ((~(arr_27 [1] [i_3 - 1] [i_9] [i_3 - 1] [i_9] [i_1] [i_9])));
                    }
                    var_33 = (((((!(arr_10 [6])))) & (max((((arr_29 [i_1] [0] [i_1] [i_3 - 1] [i_3 - 1] [i_4] [i_4]) & var_3)), ((((arr_9 [i_1] [i_3 - 1] [i_1]) <= 1)))))));
                    var_34 = (min(var_34, (((((-1892044302 ? -32751 : 1023)))))));
                }
            }
        }
    }
    #pragma endscop
}
