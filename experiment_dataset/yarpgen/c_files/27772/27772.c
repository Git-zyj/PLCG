/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    var_18 = ((!((max((!var_14), var_9)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (((max(((max((arr_1 [i_0] [i_0]), (arr_1 [3] [i_0])))), var_13)) / (arr_1 [i_0] [i_0])));
        arr_3 [i_0] [i_0] |= ((!((max(-7558, 7)))));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        var_20 = (max(var_20, (((min(var_9, (arr_4 [12])))))));

        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_21 |= (arr_6 [0]);

            for (int i_3 = 4; i_3 < 14;i_3 += 1)
            {
                var_22 = var_8;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_16 [i_1] [i_2] [i_5] [i_4] [i_5] [1] [i_4] = (min((max(((var_0 ? -29 : var_10)), (arr_1 [i_1 + 3] [i_1 + 3]))), -72));
                            var_23 = (((max((arr_4 [i_1]), (((var_8 > (arr_11 [i_1] [i_1] [i_2 - 2] [i_4])))))) >= -44962));
                            var_24 += (min(var_14, (max((arr_0 [i_1 - 3]), (arr_4 [i_5])))));
                        }
                    }
                }
                var_25 = min((((arr_10 [i_2]) / var_13)), var_14);
            }
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_26 = (min((arr_7 [i_6] [i_1]), var_2));
            var_27 = (max(var_27, ((+(min((arr_11 [i_6] [i_6] [i_6] [i_6]), (var_10 || var_0)))))));
            arr_20 [i_1] = ((((max((arr_1 [11] [1]), (arr_7 [i_1 - 3] [i_6])))) ? (arr_12 [8] [i_1] [i_1] [i_1]) : ((~(arr_7 [i_1] [i_6])))));
            arr_21 [i_1] [i_1] = ((((((arr_4 [i_1]) ? (arr_15 [i_1 - 2] [i_1 + 1] [i_1] [11] [9]) : (arr_6 [i_1])))) ? 7237 : ((((max(var_4, 11518))) ? -var_2 : ((max(1, (arr_7 [i_6] [i_6]))))))));
            var_28 = max((max((arr_10 [i_1 + 3]), var_12)), 652438859);
        }
        arr_22 [i_1] = (~1);
        var_29 = ((-(((-66 && ((max(15935397688464317768, 4294967284))))))));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_30 = (max((arr_0 [8]), (min((((15380250791329361052 ? 0 : (arr_0 [i_8])))), (arr_24 [20] [i_7])))));
            var_31 = (min(((-((0 ? var_3 : 109)))), 0));
        }
        var_32 = ((~((((arr_25 [i_7]) > var_15)))));
        var_33 &= (max(((((min((arr_25 [2]), (arr_23 [3] [13])))) ? (arr_23 [i_7] [i_7]) : (min(var_16, 58)))), ((min(var_15, 28)))));
    }
    for (int i_9 = 1; i_9 < 21;i_9 += 1)
    {
        var_34 = (min((((arr_1 [i_9] [i_9 + 3]) / (((arr_28 [i_9 + 1] [i_9]) ? 2770474236458404299 : (arr_29 [i_9 + 1]))))), (((min(1288390015, var_3))))));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 23;i_12 += 1)
                {
                    {
                        var_35 = (min(var_35, ((((((var_10 ? 227 : (arr_37 [i_9] [i_11] [i_12])))) ? (arr_33 [4] [20] [i_12]) : (((var_12 ? var_7 : (arr_27 [i_10])))))))));
                        arr_39 [i_9] [i_10] [i_11] [i_12] [i_11] = (max((((!(arr_35 [i_9] [i_9 + 2] [i_12 - 3] [i_12 - 1] [i_12])))), (arr_36 [19] [i_11])));
                        var_36 += (~(min(-253, var_0)));
                    }
                }
            }
        }
        arr_40 [i_9] = (!var_2);
        var_37 *= (min(39642, ((-(arr_29 [i_9])))));
    }
    #pragma endscop
}
