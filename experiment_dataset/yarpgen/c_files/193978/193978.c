/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_20 = var_5;
                        var_21 = (arr_5 [i_1] [i_1]);

                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            var_22 = 65529;
                            arr_11 [i_4] [7] [i_1] [1] [i_1] [i_0] [i_0] = ((((((24955 < (((!(arr_3 [i_1])))))))) ^ (arr_1 [i_0])));
                            arr_12 [1] [i_1] [i_2] [i_1] [i_0] = (var_6 ^ var_8);
                            arr_13 [i_0] [i_1] [i_2] [i_1] [0] = (arr_9 [i_1] [i_2] [i_2]);
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_1] [i_1] [i_1] [i_5] [i_1] = (3061 + 4294967294);
                            var_23 = 22958;
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_1] = 29;
                            arr_21 [i_1] [i_1] [i_2] [i_6] = ((((arr_14 [i_0] [i_1] [1] [i_1] [1]) ? 65460 : 22963)) ^ (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]));
                            var_24 = (arr_14 [i_0] [i_1] [i_2] [i_1] [i_6]);
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_26 [i_1] [i_2] [i_1] = (arr_2 [i_1]);
                            arr_27 [i_7] [i_1] [i_2] [i_2] [i_2] [i_1] [i_0] = (arr_22 [i_7] [9] [i_2] [i_1] [i_0] [i_0]);
                            arr_28 [i_1] [5] = (arr_0 [i_7] [7]);
                        }

                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_25 = ((((10179781888811470990 ? (arr_23 [i_0] [i_1] [i_2] [0]) : 22939))));
                            var_26 = ((-106 ? (2325347907 >= var_15) : (((arr_2 [i_1]) + var_8))));
                            arr_31 [9] [0] [i_1] [i_1] [i_3] [i_8] = var_8;
                            arr_32 [i_0] [i_1] [i_2] [i_1] [i_0] = (max((arr_10 [i_1] [i_2] [i_1]), (arr_23 [0] [i_1] [i_1] [0])));
                        }
                        arr_33 [i_1] [i_2] [i_1] [i_1] = ((((((arr_14 [i_3] [i_1] [3] [i_1] [i_0]) ? 18688 : 28005))) ? 118 : (min((min(8106454757864245185, (arr_30 [3] [i_1] [8] [i_2] [i_2] [i_3] [i_3]))), 1))));
                    }
                }
            }
        }
        var_27 = (max(287529791, (((730518090 >= (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_28 = ((((max(8106454757864245179, var_4))) ^ ((((((32767 ? var_19 : 0)) > var_8))))));
    #pragma endscop
}
