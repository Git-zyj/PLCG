/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (arr_0 [i_1]);
                var_15 = (((min((max(1781070472692028409, 18405)), 4294967295)) / ((((((3280022645089247985 ? -29807 : (arr_2 [i_0])))) ? var_4 : (var_11 / 5936796208431557894))))));
                arr_6 [i_0] = ((((max((min((arr_4 [i_0] [i_0]), 13267855946700399824)), (arr_3 [i_0 - 1] [i_0 + 1] [i_0 - 1])))) ? (max(((~(arr_2 [i_0]))), -2918)) : (((arr_1 [i_0] [i_1]) ? (arr_3 [i_0 + 1] [i_0 + 1] [12]) : (arr_3 [i_0 + 1] [i_1] [i_1])))));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_4 - 1] = ((((-(arr_2 [i_0]))) % (var_7 | -13512)));
                                arr_15 [i_2] [i_1] [i_4 - 1] [i_3] [i_0] = ((((min(((((arr_4 [i_0 - 1] [i_1]) ? (arr_3 [i_3] [i_1] [i_1]) : (arr_1 [i_1] [i_2])))), (max(2614609375713260886, 8))))) ? var_5 : (min((arr_11 [i_4] [i_4] [i_0 - 1] [i_1] [i_4 + 2] [i_1]), (arr_3 [i_0 + 1] [i_0 - 1] [i_0])))));
                            }
                        }
                    }
                    arr_16 [i_0] = (arr_8 [i_0] [i_1] [i_2] [i_1]);
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        var_16 = (max((arr_17 [i_5 - 1]), ((((arr_18 [i_5 + 1] [i_5 + 1]) / (arr_18 [i_5 - 1] [i_5 + 1]))))));
        var_17 = ((((arr_19 [i_5 + 1] [i_5 + 1]) ? (arr_19 [i_5 + 1] [i_5 - 1]) : var_6)));
        arr_20 [i_5] [i_5] = ((((min(1199726934, (arr_18 [i_5] [10])))) ? var_14 : -1));
        var_18 = (((((var_1 ? (arr_17 [i_5 - 1]) : -19279))) ? (-2764 > 1852338248) : (min((arr_18 [i_5 - 1] [i_5 - 1]), 3875294215))));
    }

    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_19 = (min((arr_2 [i_6]), (arr_18 [i_6] [i_6])));
        arr_23 [9] = (((arr_10 [i_6] [i_6]) ? (arr_13 [i_6] [i_6] [i_6] [1] [i_6] [i_6] [i_6]) : (min(((8816608464881889349 ? var_5 : 1852338237)), 4294967291))));
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        arr_26 [i_7] = (~10813);
        arr_27 [i_7] = (((arr_1 [i_7] [i_7]) ? (((((min((arr_3 [14] [i_7] [i_7]), (arr_9 [2] [i_7])))) != (((arr_17 [i_7]) ? (arr_18 [i_7] [1]) : 3317798128713811517))))) : (((!(arr_4 [0] [i_7]))))));
        var_20 = ((5089743456291886062 < (((((arr_13 [i_7] [5] [5] [0] [11] [i_7] [i_7]) ? var_11 : (arr_8 [i_7] [i_7] [i_7] [i_7]))) - 4267892983191774347))));
        arr_28 [i_7] = ((((~(arr_3 [i_7] [i_7] [i_7]))) / (max((arr_3 [i_7] [i_7] [i_7]), (arr_3 [i_7] [i_7] [i_7])))));
    }
    #pragma endscop
}
