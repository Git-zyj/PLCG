/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [10]) >> ((((((6132383107255566415 ? (arr_0 [9]) : var_0)) - ((((var_6 == (arr_0 [i_0]))))))) - 1473537461031100999))));
        var_10 = (max(-104070207324290463, 7780));
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_11 |= (((arr_10 [i_1] [i_2]) * (min(104070207324290457, (arr_12 [i_4 + 1] [i_4] [i_4 + 3] [i_4] [i_4 - 2])))));
                            var_12 ^= (((arr_15 [i_4] [i_4 + 3] [i_1 + 2] [i_1] [i_1]) ? 1783990008054681575 : (((((max(58426, var_2))) ? (arr_15 [i_1 - 3] [i_2] [0] [i_5] [i_4 - 2]) : var_7)))));
                        }
                        for (int i_6 = 2; i_6 < 8;i_6 += 1)
                        {
                            var_13 = (max(var_13, (((-104070207324290463 ? 39673 : 24220)))));
                            var_14 = (min((max(1, (arr_3 [i_2] [i_6 + 4]))), ((min(615135910, (arr_7 [i_1 - 1] [i_4 + 3] [i_6 + 3]))))));
                        }
                        arr_18 [i_3] = (min((((!(((-(arr_1 [i_1]))))))), var_6));
                        var_15 += ((((var_7 ? (max((arr_17 [i_1] [i_2] [11] [i_3] [i_2] [i_4]), var_0)) : 153)) >> (var_6 - 9666837149920440209)));
                        var_16 = (max((max((max(var_5, 11184224123401453887)), ((min((arr_11 [i_1] [i_3] [1] [i_1]), (arr_9 [i_1] [i_2])))))), ((min((max(-22219, 24821)), ((max((arr_13 [7] [6] [6] [i_1] [i_1 - 2]), var_5))))))));
                    }
                }
            }
        }
        var_17 = ((!(~576460752303423487)));
    }
    var_18 = ((!((min(((var_3 ? var_8 : var_3)), var_1)))));
    #pragma endscop
}
