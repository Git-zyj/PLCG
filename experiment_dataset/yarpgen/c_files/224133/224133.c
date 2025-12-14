/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (((-(arr_2 [10]))))));
        arr_4 [i_0] = (min((arr_2 [i_0]), (arr_2 [i_0])));
        arr_5 [1] [4] |= (((-21506 > 8101620871529183251) ? var_1 : (arr_2 [10])));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_10 [18] |= ((((max(1573631707659705176, 213))) ? ((((!(arr_0 [i_1]))))) : ((((min(var_5, var_13))) ? 9540399697747088941 : ((((!(arr_7 [12])))))))));
        arr_11 [i_1] = ((((!(arr_9 [20] [i_1]))) ? (min((arr_9 [i_1] [i_1]), (arr_9 [i_1] [i_1]))) : ((-(arr_9 [i_1] [i_1])))));
        var_16 = var_5;
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_16 [i_3] = (((arr_13 [14]) * (((var_1 > (arr_12 [i_2] [i_3]))))));
            var_17 = (min(var_17, (arr_13 [20])));
            arr_17 [i_3] [i_3] [i_2] = (arr_13 [18]);
        }
        var_18 = (((arr_13 [i_2]) <= ((58829 ? 9540399697747088958 : ((((arr_12 [6] [i_2]) ? var_3 : (arr_13 [i_2]))))))));
        var_19 = (max(var_19, (arr_15 [i_2] [i_2])));
        var_20 = (min(var_20, ((((arr_15 [i_2] [i_2]) != var_9)))));
    }
    var_21 -= ((((7589178979533700538 ? 4022948679599203514 : 8101620871529183270)) < ((((((var_9 ? var_1 : 75)) < (var_1 == var_1)))))));
    var_22 += var_8;
    var_23 = (min(var_23, var_10));
    #pragma endscop
}
