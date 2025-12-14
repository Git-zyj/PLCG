/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_18 = (arr_4 [i_0] [9] [1]);

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_19 = (((((arr_0 [i_1] [i_1]) / (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_8 [i_0] [i_1] [i_2]))))) + ((((max((arr_5 [i_0] [i_0]), (arr_1 [5]))) * (arr_6 [i_0] [i_0] [i_0] [1]))))));
                    arr_9 [6] [i_0] = (max((arr_0 [i_1 - 3] [i_1 + 1]), (arr_8 [i_0] [i_0] [i_0])));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] = ((max(1432266629, 2985397277470377869)) == (max((arr_11 [i_1] [i_1 + 1] [i_1 + 1] [1] [4]), (((arr_8 [9] [i_1] [i_1]) | (arr_1 [0]))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_3] = ((!((min((arr_2 [i_1 + 2]), (arr_2 [i_1 + 2]))))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] = -29609;
                    }
                    var_20 = 9223372036854775794;
                }
                for (int i_4 = 1; i_4 < 7;i_4 += 1)
                {
                    arr_19 [i_0] = ((-(((max(139, (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_25 [i_6] = (arr_23 [i_0] [i_1] [i_6]);
                                arr_26 [i_0] [i_0] [i_0] [i_6] [i_6] [i_0] = (max((arr_0 [i_1] [i_6]), ((((((-(arr_11 [i_0] [i_1 - 2] [i_4 + 3] [i_5] [i_0])))) || (arr_3 [i_1 - 1]))))));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    var_21 ^= ((((-(arr_24 [i_0] [i_7]))) ^ (arr_6 [i_0] [i_0] [i_0] [i_0])));
                    arr_29 [9] [9] [i_7] = (min(((~((min((arr_0 [i_0] [i_0]), (arr_21 [i_0] [i_0] [i_0] [i_0])))))), (((arr_17 [i_7] [i_7]) ? (((arr_3 [i_7]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_17 [i_0] [i_0]))) : (~20600)))));
                    arr_30 [i_7] [i_1] = (((~1786053637) ? (arr_12 [i_1 + 1] [i_1 - 2]) : 1));
                    var_22 = (((arr_12 [i_0] [5]) * (((((((1633493334 > (arr_24 [i_0] [i_0]))))) > 255)))));
                    arr_31 [i_0] [i_0] [i_0] = (min((max(((~(arr_1 [i_0]))), 1838580020)), -2985397277470377857));
                }
                var_23 = (max((((arr_27 [i_0] [i_0] [i_1] [i_1 + 1]) ? (((arr_28 [i_0]) & (arr_3 [i_0]))) : ((((!(arr_20 [5]))))))), ((((arr_21 [i_1 - 1] [8] [8] [8]) > ((max(141, (arr_18 [i_0])))))))));
            }
        }
    }
    var_24 = (((var_1 + 2147483647) >> (var_17 - 3269601855)));
    var_25 -= ((+(((!171) + 1462458741))));
    var_26 = (max((min((-1185277754 / var_0), (max(var_3, -8749437844427273307)))), var_2));
    #pragma endscop
}
