/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 10245583868678009121;
    var_15 = ((var_10 * (max(((var_11 ? var_8 : 8201160205031542485)), (((var_12 ? var_8 : var_7)))))));
    var_16 = ((((((-7974 ? var_11 : 10245583868678009121)))) ? 4578520601422417117 : var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = ((var_11 ? (~var_4) : (((arr_0 [2]) ? (arr_1 [i_0]) : var_7))));
        var_18 = ((((var_1 | (arr_0 [i_0]))) - (arr_1 [i_0])));

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0] [i_1 + 2] = ((~((var_3 ? var_13 : 7881299347898368))));
            var_19 = (arr_1 [5]);
        }
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_15 [i_4] [i_4] [1] = ((~(arr_2 [i_4 - 2] [i_3 - 1] [i_2 + 1])));
                        var_20 = ((~(arr_2 [i_4 + 1] [i_4] [i_3 + 2])));
                    }
                }
            }
        }
        arr_16 [i_0] = ((~(var_11 | var_1)));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            var_21 = var_4;
            var_22 = ((max((arr_7 [i_5] [i_6 + 1] [i_6 + 1]), (~32768))));
            arr_21 [i_6] [6] = ((var_3 >= (arr_19 [10] [i_5] [i_5])));
        }
        var_23 = (((((min(var_4, (arr_18 [i_5] [i_5]))))) ^ (arr_20 [i_5] [i_5])));
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
    {
        var_24 = ((~(arr_0 [i_7])));

        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            arr_27 [i_7] [i_8] = (max((arr_14 [i_7] [i_8] [i_8] [4]), ((-(1942304443 & var_8)))));
            arr_28 [i_7] = (((arr_2 [6] [6] [6]) ? ((min((!var_0), (!var_9)))) : ((-(arr_9 [4] [4] [i_7] [1])))));
            arr_29 [i_8] = ((var_2 * (arr_12 [4] [i_7] [i_7] [i_8] [4] [i_8])));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_33 [i_9] [i_9] [i_9] = min((max((!7), (~var_12))), 2147483647);
            var_25 = (var_3 ? var_12 : var_1);
        }
        var_26 = ((!((min(8201160205031542485, (13 | var_12))))));
        var_27 = ((var_12 ? (((((60 ? var_1 : var_1)) == (arr_13 [i_7])))) : ((((~(arr_14 [i_7] [0] [i_7] [i_7])))))));
    }
    #pragma endscop
}
