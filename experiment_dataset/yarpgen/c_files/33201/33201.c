/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_17));
    var_20 = (max(var_20, (((!((!(~var_0))))))));
    var_21 += ((((((4611123068473966592 ? var_8 : -4611123068473966571)) ? (min(var_4, -6649355642166407814)) : ((min(var_5, 3211665804)))))));
    var_22 = ((((max(846128140, (!var_13)))) ? (((((var_11 ? var_11 : var_3))) ? (max(var_15, var_9)) : -2066017959)) : var_5));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(var_14, (arr_0 [i_0] [i_0])));
        var_23 = (min(var_23, ((((((!(arr_0 [20] [i_0]))) ? (((arr_1 [i_0]) ? 1048568 : (arr_1 [i_0]))) : (!var_1))) * (arr_0 [i_0] [13])))));
        arr_3 [i_0] |= (((15393 <= 41688) ? 18446744073709551615 : 31383));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [20] = (arr_0 [i_1] [11]);
        arr_7 [i_1] [i_1] = var_5;
        var_24 |= (min((25 >= 8799807291163809118), var_13));
        arr_8 [i_1] = ((((max((((arr_0 [i_1] [i_1]) << (arr_0 [i_1] [i_1]))), (((var_0 <= (arr_4 [i_1] [i_1]))))))) ? (max((arr_1 [i_1]), ((((arr_1 [i_1]) ? (arr_1 [i_1]) : 6649355642166407805))))) : ((max((((arr_1 [i_1]) ? (arr_5 [i_1]) : (arr_0 [i_1] [i_1]))), (arr_1 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_25 = (max((arr_5 [i_2]), (((arr_9 [i_2] [i_2]) ? var_0 : ((((97 || (arr_0 [i_2] [i_2])))))))));

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_26 = (max(((-(max(var_2, (arr_5 [i_2]))))), ((min(((max((arr_10 [i_2] [i_2]), (arr_12 [i_2])))), (arr_1 [i_2]))))));
            arr_13 [6] &= (arr_11 [i_2] [i_3] [i_3]);
            var_27 = (max(((((max(-312962729, (arr_10 [i_2] [4])))) ? (min(-6649355642166407841, (arr_12 [i_3]))) : ((min(var_11, (arr_11 [i_2] [i_3] [i_2])))))), (((((min((arr_11 [i_2] [i_2] [4]), (arr_11 [i_2] [i_2] [i_2])))) ? (max(var_12, (arr_0 [i_2] [i_2]))) : (3448839155 + 46))))));
            arr_14 [i_2] [i_2] = (min((arr_11 [i_2] [i_2] [i_2]), (((!(arr_12 [i_2]))))));
        }
    }
    #pragma endscop
}
