/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = ((((-(arr_1 [2])))) ? (arr_0 [i_0]) : (~var_4));
        var_13 = ((!(((0 && 6235719477389344741) == (200 && 6235719477389344741)))));

        for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] [i_1] [1] = (max((min(((var_8 ? (arr_1 [17]) : (arr_0 [i_1]))), ((min((arr_3 [14] [i_1]), (arr_1 [5])))))), ((((((arr_3 [i_0] [i_1]) ? (arr_1 [14]) : (arr_1 [i_0])))) ? ((((arr_3 [i_1] [i_0]) && (arr_3 [i_0] [i_1 + 1])))) : ((max((arr_2 [i_1] [12]), (arr_1 [i_0]))))))));
            var_14 &= ((var_7 ? (((((((arr_1 [i_1]) + (arr_0 [i_0])))) ? ((min((arr_1 [i_0]), (arr_1 [15])))) : ((var_5 + (arr_0 [i_1])))))) : ((var_11 ? ((((arr_1 [i_0]) ? var_2 : (arr_2 [9] [9])))) : (((arr_3 [i_0] [i_1]) ? var_7 : var_11))))));
            var_15 = (((((((var_4 ? (arr_0 [21]) : var_6))) && (((var_3 ? (arr_3 [4] [i_0]) : (arr_1 [i_1])))))) ? (min(((((arr_2 [17] [17]) + (arr_0 [i_0])))), ((11512617961861366721 ? 15037085115278917325 : 111)))) : (arr_0 [i_0])));
        }
        for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] = (arr_4 [5] [18]);
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    {
                        var_16 = (min(var_16, ((min((((((arr_14 [i_0]) ? var_4 : (arr_10 [i_4] [i_4] [i_3]))))), (arr_6 [6] [19] [i_0]))))));
                        var_17 = (max(var_17, (max(var_1, (arr_13 [i_0] [i_2] [i_0] [16] [16] [16])))));
                    }
                }
            }
        }
    }
    var_18 = min((max(((var_1 ? var_8 : var_1)), var_10)), (((var_9 ? var_8 : var_3))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    var_19 = (min(var_19, (((min((min((arr_12 [i_5] [i_5] [i_5]), var_11)), (arr_11 [12] [i_6] [i_6] [i_6]))) / ((min((arr_18 [i_5] [i_5]), (arr_21 [2]))))))));
                    var_20 = (min(var_20, (((((((((arr_17 [i_5] [i_5]) == (arr_12 [12] [4] [4]))) ? (arr_10 [i_7] [i_6] [i_7]) : (arr_20 [i_5] [i_5])))) ? (((arr_3 [8] [i_6 - 3]) ? (arr_22 [0] [i_6] [8] [i_7]) : (arr_21 [i_5]))) : ((((max((arr_8 [i_5] [i_5]), (arr_21 [4])))) ? (((arr_14 [i_7]) + var_7)) : var_10)))))));
                }
            }
        }
    }
    var_21 = min((var_11 == var_6), var_3);
    #pragma endscop
}
