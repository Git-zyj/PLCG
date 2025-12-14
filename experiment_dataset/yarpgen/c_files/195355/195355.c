/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 |= (min((max((arr_2 [6] [i_0]), (((!(arr_2 [14] [i_0])))))), (((!((max((arr_0 [0] [i_0]), (arr_0 [0] [0])))))))));
        arr_3 [i_0] [i_0] = (((((!(arr_0 [i_0] [i_0])))) & (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            arr_7 [i_0] = (min((min((((arr_5 [i_0]) ? (arr_5 [i_0]) : (arr_5 [i_0]))), (arr_5 [i_0]))), (arr_0 [i_0] [i_1 - 1])));

            /* vectorizable */
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                var_17 = ((!(arr_9 [i_2] [i_2 + 2] [i_1] [i_1])));
                var_18 = (max(var_18, ((((arr_10 [i_0] [i_1] [i_2] [11]) ? (((arr_0 [2] [20]) ? (arr_2 [12] [12]) : (arr_5 [i_1 - 1]))) : (arr_0 [14] [i_2]))))));
                arr_12 [i_0] [i_0] = (arr_4 [10] [i_0] [i_2]);
                arr_13 [i_0] = ((arr_0 [i_0] [i_2]) ? (((!(arr_10 [i_0] [i_0] [i_1 - 1] [i_2])))) : (arr_2 [i_0] [i_2 - 3]));
                arr_14 [i_0] [i_1] [i_0] = ((!(arr_8 [i_1 + 1] [i_1 + 1] [i_1 - 1])));
            }
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                arr_19 [i_0] [i_0] = (arr_10 [i_0] [i_0] [i_1 + 1] [4]);
                var_19 = ((((!(arr_1 [i_3])))));
                var_20 = ((((!(arr_1 [i_1])))));
            }
            arr_20 [i_0] [i_0] = (((min((((arr_8 [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [i_0] [i_1]) : (arr_5 [1]))), (arr_6 [i_0] [i_1]))) <= (arr_5 [i_0])));
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_21 = (max(var_21, ((min((arr_10 [i_0] [i_0] [i_0] [i_4]), (((arr_8 [1] [i_4] [i_4]) ? ((-(arr_23 [i_0] [3]))) : ((max((arr_17 [i_0] [i_0] [i_4]), (arr_17 [i_0] [i_0] [i_4])))))))))));
            arr_25 [i_0] = (((((-(arr_16 [i_0])))) ? (max((((!(arr_16 [i_0])))), ((-(arr_11 [i_4] [7] [i_0]))))) : (arr_6 [i_0] [i_0])));
            arr_26 [i_0] [i_0] [i_4] = (arr_0 [i_0] [i_4]);
        }
    }
    var_22 = (min((max(var_15, -var_0)), var_7));
    #pragma endscop
}
