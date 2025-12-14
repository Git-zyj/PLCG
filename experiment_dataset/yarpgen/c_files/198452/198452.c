/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(-var_6, ((-(var_2 / var_6)))));
    var_14 = (((min(((-949406128 ? -7202161250801140145 : 37210)), (min(-9035911524020446093, 0)))) == (~-6860440266892074638)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_2] [6] [i_2] [i_3] = (~(arr_10 [i_2] [i_2] [i_2] [i_3] [1] [i_3]));
                        var_15 = (max(var_15, (504457500 / -214774498)));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        var_16 = (((var_5 | (arr_16 [i_0] [i_0]))));
                        arr_17 [i_0 + 1] [i_1] [i_2] [i_2] = 504457500;
                        arr_18 [5] [8] [i_2 - 2] [5] [i_2] = (var_12 ? (arr_13 [i_0 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) : 1579847466);
                        arr_19 [10] = (((arr_7 [i_0 + 1] [i_1] [1] [i_4]) ^ (arr_7 [0] [4] [10] [i_4])));
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            arr_25 [11] [11] [i_2] [3] [i_5] [i_6] = ((-(arr_24 [i_2 - 1] [i_1] [6] [i_0 - 1] [4])));
                            arr_26 [7] [4] [7] [i_2] [4] [i_5] [0] = (((231637174 | (arr_15 [i_0] [i_2] [i_2] [i_6]))) << (!866366150));
                        }
                        var_17 = (!504457497);
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        arr_29 [i_0] [i_0] = (arr_7 [i_0] [i_7] [i_7] [i_2]);
                        var_18 ^= ((!(arr_23 [i_0 - 1])));
                        var_19 += ((!(arr_16 [i_0] [i_2 - 3])));
                        var_20 = ((((-399260269 ? (arr_1 [i_1]) : 1974103375)) == (arr_3 [i_2 - 2])));
                        arr_30 [9] = (-1579847465 & 7780);
                    }
                    var_21 = ((-(arr_15 [0] [10] [i_2 - 3] [i_2])));

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_22 ^= ((-((12 ? 437226377 : -8599871432182220353))));
                        var_23 = (((arr_5 [i_0 + 1] [i_1] [11]) && (arr_5 [i_0 + 1] [i_1] [i_2 - 2])));
                        var_24 = ((((var_1 ? 1855343869 : -221078699)) < (10256 <= 193054182)));
                        var_25 = (arr_24 [i_0] [i_2 - 3] [i_0 - 1] [i_0] [i_1]);
                    }
                }
            }
        }
        arr_33 [i_0] = (-1 ^ (((!(arr_32 [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 - 1])))));
        var_26 = (var_12 | 65530);
    }
    var_27 = var_2;
    #pragma endscop
}
