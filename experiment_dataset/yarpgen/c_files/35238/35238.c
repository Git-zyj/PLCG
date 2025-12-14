/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = (min(((((arr_3 [i_0] [i_0]) <= 6573436355585065248))), (arr_8 [i_1 + 1] [i_1 + 3] [i_1 - 1] [i_1 - 1])));
                    var_13 = (arr_1 [i_0] [21]);
                }
            }
        }
        var_14 = (min((arr_2 [i_0]), ((((((arr_5 [7]) ? var_10 : 6573436355585065250)) >= var_2)))));
    }
    var_15 = ((((min(var_1, (var_2 / var_1)))) == ((17513901522479210760 ? 15553164662174488630 : 1))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_16 = (max(var_16, ((((arr_19 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4 + 1]) || ((((~(arr_18 [i_3]))) < var_5)))))));
                        arr_23 [i_3] [i_4] [i_3] [i_6] = (((arr_12 [i_4 - 2] [i_4 + 2]) - ((5559663700540035058 ? (arr_12 [i_3] [i_4 - 1]) : (arr_12 [i_3] [i_4 + 1])))));
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_17 = (((arr_12 [i_3] [i_3]) ? (((arr_0 [i_4 + 2]) ? (arr_0 [i_4 + 1]) : 11873307718124486366)) : (min(17781, 11873307718124486366))));

                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_18 = 6573436355585065248;
                            var_19 = ((((((var_6 % (arr_24 [i_3] [i_4]))) % (arr_1 [i_3] [i_4 - 2]))) ^ ((239 ? -5 : 6573436355585065249))));
                            var_20 = (((((arr_16 [i_3] [i_3] [1]) & (~648005667201646562)))) ? (17513901522479210764 >= 31) : ((min((arr_3 [i_5] [i_3]), 7060615212243376018))));
                            var_21 = (arr_22 [i_8] [i_4] [i_5] [i_7]);
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_22 = (min((!var_0), (((arr_2 [i_4 + 2]) && var_6))));
                            var_23 = (max(var_23, var_9));
                            arr_31 [i_3] [i_3] [i_5] [i_7] [i_9] [i_5] [i_5] = (((-(arr_30 [i_4 - 2] [i_4 + 1]))));
                            var_24 = (arr_20 [3] [i_9] [i_9] [i_9] [i_9]);
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            var_25 = (max(var_25, ((((((var_5 & (arr_9 [i_4 - 1] [i_4 + 1])))) ? ((min((arr_19 [i_4 + 2] [3] [i_5] [i_7] [9] [i_5]), (arr_14 [i_4 - 1])))) : ((((var_2 | 1) > var_6))))))));
                            arr_34 [i_3] [i_3] [i_3] [3] [i_3] = ((0 ^ (min(225, 8355207240823775442))));
                        }
                    }
                    var_26 = (((arr_29 [i_3] [i_4] [4] [i_3] [i_3] [i_5]) ? ((((arr_28 [1] [i_4] [i_4] [i_4 - 2] [i_4 - 1] [8]) ? (arr_28 [i_4] [i_4 - 2] [i_5] [i_4 - 1] [i_5] [i_3]) : 4294967294))) : ((((((arr_5 [i_5]) + (arr_3 [i_4] [i_3])))) + (~11873307718124486369)))));
                }
            }
        }
    }
    #pragma endscop
}
