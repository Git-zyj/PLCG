/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_17 = ((((255 ? (!var_0) : var_13)) & (((((arr_0 [i_0]) <= 231)) ? -89 : 18054))));
        var_18 = (min(var_18, (((255 ? 1 : 9538)))));
        var_19 *= (!-9107728627300416703);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (((-(arr_3 [i_1 - 1] [i_1]))))));
        var_21 = (((arr_4 [i_1 + 1]) ? 7280 : (arr_4 [i_1])));
    }
    var_22 = (min((14292753100690960758 <= 2), var_12));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_23 -= ((((((arr_7 [i_2] [i_2]) ? var_0 : (arr_5 [i_2])))) ? (((231 ? 1 : -9223372036854775804))) : ((241 ? (arr_5 [i_2]) : 274877906943))));
        var_24 = ((((1 ? 48 : 241))) ? -10 : 9107728627300416702);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_25 = (min(var_25, 274877906944));
        var_26 = (min(var_26, ((((arr_8 [8]) > (arr_9 [i_3]))))));
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_27 = (((((arr_15 [i_4] [i_5]) / (min(var_6, 244)))) > ((((arr_14 [i_4] [i_5] [i_4]) ? (arr_14 [i_4] [i_5] [i_4]) : (arr_14 [i_4] [i_5] [i_4]))))));
            var_28 = (min(var_28, ((((min((arr_10 [i_4] [i_5]), (((arr_13 [i_5] [i_5] [i_5]) ? (arr_10 [i_4] [i_4 - 1]) : var_2)))) + (min(1, (arr_13 [i_5] [i_4 - 1] [i_4]))))))));
            arr_16 [i_4] = (arr_10 [i_4 - 1] [i_4 - 1]);
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            arr_19 [i_6] [i_4] [i_4] = ((!((min(((((arr_18 [i_4 - 1] [i_4 - 1]) ? -111 : (arr_11 [i_4] [i_4])))), (min((arr_13 [i_4] [i_6] [i_4]), 254)))))));
            arr_20 [i_4] = (arr_13 [i_4] [i_4] [i_4]);
            var_29 = var_12;
            var_30 = ((((min(274877906943, 6149480645899864192))) ? (((((var_14 ? (arr_13 [i_4] [i_4] [i_4]) : -1))) ? ((((var_12 < (-127 - 1))))) : var_2)) : (arr_13 [i_4] [i_4 - 1] [i_6])));
        }
        var_31 -= (arr_15 [i_4] [i_4]);
    }
    var_32 = (max(var_32, var_15));
    #pragma endscop
}
